import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class UpdateAccident {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/traffic";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "";
    private static final SimpleDateFormat DATE_FORMAT = new SimpleDateFormat("yyyy-MM-dd");

    private String id;
    private Connection conn;
    private Scanner scanner;

    public UpdateAccident(String id) {
        this.id = id;
        scanner = new Scanner(System.in);

        try {
            conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public void updateAccident(int numInjured, String location, String date, String description) {
        try {
            PreparedStatement stmt = conn.prepareStatement(
                    "UPDATE accident SET num_injured = ?, date = ?, location = ?, description = ? WHERE accident_id = ?");

            stmt.setInt(1, numInjured);
            stmt.setDate(2, new java.sql.Date(DATE_FORMAT.parse(date).getTime()));
            stmt.setString(3, location);
            stmt.setString(4, description);
            stmt.setInt(5, Integer.parseInt(id));
            stmt.executeUpdate();

            addInjuredPeople();
            updateAggressor();

            System.out.println("Accident updated successfully");
        } catch (SQLException | ParseException e) {
            System.out.println("Error updating accident: " + e.getMessage());
        }
    }

    public void updateAggressor() {
        try {

            PreparedStatement stmt = conn.prepareStatement("DELETE FROM aggressors WHERE accident_id = ?");
            stmt.setInt(1, Integer.parseInt(id));
            stmt.executeUpdate();

            AggressorDataInput aggressorData = new AggressorDataInput(conn);

            System.out.println("Update Aggressor Information");
            System.out.println("-------------------");

            aggressorData.addAggressor(Integer.parseInt(id));

            System.out.println("Aggressor information updated successfully");
        } catch (Exception e) {
            System.out.println("Error updating aggressor information: " + e.getMessage());
        }
    }

    public void addInjuredPeople() {
        try {
            PreparedStatement stmt = conn.prepareStatement("DELETE FROM victims WHERE accidentid = ?");
            stmt.setInt(1, Integer.parseInt(id));
            stmt.executeUpdate();

            InjuredPeople injuredPerson = new InjuredPeople(conn);

            System.out.println("Add Injured People");
            System.out.println("-------------------");

            System.out.print("Enter the number of injured people: ");
            int num = scanner.nextInt();

            for (int i = 0; i < num; i++) {
                injuredPerson.add(Integer.parseInt(id));
            }

            System.out.println("Injured people added successfully");
        } catch (SQLException e) {
            System.out.println("Error adding injured people: " + e.getMessage());
        }
    }

}
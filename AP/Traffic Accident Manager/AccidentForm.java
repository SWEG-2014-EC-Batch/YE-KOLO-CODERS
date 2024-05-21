import java.sql.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class AccidentForm {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/traffic";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "";
    private static final SimpleDateFormat DATE_FORMAT = new SimpleDateFormat("yyyy-MM-dd");

    private Scanner scanner;
    private Connection conn;

    public AccidentForm() {
        scanner = new Scanner(System.in);

        try {
            conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public void addAccident() {
        System.out.println("Add New Accident");
        System.out.println("-------------------");

        try {
            PreparedStatement stmt = conn.prepareStatement(
                    "INSERT INTO accident(accident_id, num_injured, date,location, description) VALUES ( ?, ?, ?, ?, ?)");

            System.out.print("Enter Accident ID: ");
            int accidentId = Integer.parseInt(scanner.nextLine());
            stmt.setInt(1, accidentId);

            System.out.println("Enter Accident Location: ");
            stmt.setString(4, scanner.nextLine());

            System.out.println("Enter Accident Date (YYYY-MM-DD): ");
            stmt.setDate(3, new java.sql.Date(DATE_FORMAT.parse(scanner.nextLine()).getTime()));

            System.out.println("Enter Accident Description:");
            stmt.setString(5, scanner.nextLine());

            System.out.print("Enter Number Injured: ");
            int numInjured = Integer.parseInt(scanner.nextLine());
            stmt.setInt(2, numInjured);

            System.out.println("-------------------");

            System.out.println("\nAdd Injured People Information");
            System.out.println("-------------------");

            InjuredPeople injuredPerson = new InjuredPeople(conn);

            for (int i = 0; i < numInjured; i++) {
                injuredPerson.add(accidentId);
            }

            System.out.println("-------------------");

            System.out.println("Enter Aggressor's Information");
            System.out.println("-------------------");

            AggressorDataInput aggressorDataInput = new AggressorDataInput(conn);
            aggressorDataInput.addAggressor(accidentId);

           
            stmt.executeUpdate();
            System.out.println("Accident added successfully");
        } catch (SQLException | ParseException e) {
            System.out.println("Error adding accident: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
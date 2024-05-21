import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class AccidentFilePrinter {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/traffic";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "";
    private static final SimpleDateFormat DATE_FORMAT = new SimpleDateFormat("yyyy-MM-dd");

    private Connection conn;
    private Scanner scanner;

    public AccidentFilePrinter() {
        scanner = new Scanner(System.in);

        try {
            conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public void printAccidentToFile() {
        System.out.println("Print Accident Details to File");
        System.out.println("-------------------");

        System.out.print("Enter the filename: ");
        String filename = scanner.nextLine();

        File outputFile = new File(filename);
        while (outputFile.exists()) {
            System.out.println("File already exists. Please enter another filename.");
            System.out.print("Enter a new filename: ");
            filename = scanner.nextLine();
            outputFile = new File(filename);
        }

        try (FileWriter writer = new FileWriter(outputFile)) {
            System.out.print("Enter the accident ID: ");
            int accidentId = Integer.parseInt(scanner.nextLine());

            PreparedStatement stmt = conn.prepareStatement("SELECT * FROM accident WHERE accident_id = ?");
            stmt.setInt(1, accidentId);
            ResultSet rs = stmt.executeQuery();

            if (rs.next()) {
                writer.write("Accident Details\n");
                writer.write("-------------------\n");
                writer.write("Accident ID: " + rs.getInt("accident_id") + "\n");
                writer.write("Number Injured: " + rs.getInt("num_injured") + "\n");
                writer.write("Location: " + rs.getString("location") + "\n");
                writer.write("Date: " + DATE_FORMAT.format(rs.getDate("date")) + "\n");
                writer.write("Description: " + rs.getString("description") + "\n");

                PreparedStatement stmt1 = conn.prepareStatement("SELECT * FROM aggressors WHERE accident_id = ?");
                stmt1.setInt(1, accidentId);
                ResultSet rs1 = stmt1.executeQuery();

                writer.write("\nAggressor Information\n");
                writer.write("-------------------\n");

                if (rs1.next()) {
                    writer.write("Aggressor's Name: " + rs1.getString("name") + "\n");
                    writer.write("Aggressor's Phone Number: " + rs1.getString("phone_number") + "\n");
                    writer.write("Aggressor's Vehicle Type: " + rs1.getString("vehicle_type") + "\n");
                    writer.write("Aggressor's Vehicle Name: " + rs1.getString("vehicle_name") + "\n");
                    writer.write("Aggressor's License Number: " + rs1.getString("license_number") + "\n");
                    writer.write("Aggressor's Vehicle License Plate: " + rs1.getString("license_plate") + "\n");
                } else {
                    writer.write("No aggressor information found.\n");
                }

                rs1.close();
                stmt1.close();

                writer.write("\nInjured People\n");
                writer.write("-------------------\n");

                PreparedStatement stmt3 = conn.prepareStatement("SELECT * FROM victims WHERE accidentid = ?");
                stmt3.setInt(1, accidentId);
                ResultSet rs3 = stmt3.executeQuery();

                while (rs3.next()) {
                    writer.write("Name: " + rs3.getString("name") + "\n");
                    writer.write("Phone Number: " + rs3.getString("phone_number") + "\n");
                    writer.write("Injury Detail: " + rs3.getString("injury_detail") + "\n");
                    writer.write("Was the victim a pedestrian: " + rs3.getString("pedestrian") + "\n");
                    writer.write("Vehicle Type: " + rs3.getString("vehicle_type") + "\n");
                    writer.write("Vehicle Name: " + rs3.getString("vehicle_name") + "\n");
                    writer.write("License Plate: " + rs3.getString("license_plate") + "\n");

                    writer.write("\n");
                }

                rs3.close();
                stmt3.close();

                rs.close();
                stmt.close();

                writer.write("End of Report");
                System.out.println("Accident details printed to file: " + filename);
            } else {
                System.out.println("Accident not found with ID: " + accidentId);
            }

        } catch (SQLException | IOException e) {
            System.out.println("Error printing accident details: " + e.getMessage());
            e.printStackTrace();
        }
    }

}

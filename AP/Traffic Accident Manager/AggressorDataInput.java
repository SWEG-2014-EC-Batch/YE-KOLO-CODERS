import java.sql.*;
import java.util.*;

public class AggressorDataInput {
    private Connection conn;
    private Scanner scanner;

    public AggressorDataInput(Connection conn) {
        this.conn = conn;
        scanner = new Scanner(System.in);
    }

    public void addAggressor(int accidentId) {
        try {
            PreparedStatement stmt = conn.prepareStatement(
                    "INSERT INTO aggressors (accident_id, name, phone_number, license_number,vehicle_type,vehicle_name, license_plate) "
                            + "VALUES (?, ?, ?, ?, ?, ?,?)");

            stmt.setInt(1, accidentId);

            System.out.print("Enter Aggressor's Name: ");
            String name = scanner.nextLine();
            stmt.setString(2, name);

            System.out.print("Enter Aggressor's Phone Number: ");
            String phoneNumber = scanner.nextLine();
            stmt.setString(3, phoneNumber);

            System.out.print("Enter Aggressor's License Number: ");
            String licenseNumber = scanner.nextLine();
            stmt.setString(4, licenseNumber);

            System.out.print("Enter Aggressor's Vehicle Type: ");
            String vehicleType = scanner.nextLine();
            stmt.setString(5, vehicleType);

            System.out.print("Enter Aggressor's Vehicle Name: ");
            String vehicleName = scanner.nextLine();
            stmt.setString(6, vehicleName);

            System.out.print("Enter Aggressor's Vehicle License Plate: ");
            String licensePlate = scanner.nextLine();
            stmt.setString(7, licensePlate);

            stmt.executeUpdate();
            stmt.close();
        } catch (SQLException e) {
            System.out.println("Error adding aggressor: " + e.getMessage());
            e.printStackTrace();
        }
    }

}
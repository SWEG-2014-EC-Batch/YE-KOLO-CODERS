import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class InjuredPeople {
    private Connection conn;
    private Scanner scanner;

    public InjuredPeople(Connection conn) {
        this.conn = conn;
        scanner = new Scanner(System.in);
    }

    public void add(int accidentId) {
        try {
            PreparedStatement stmt = conn.prepareStatement(
                    "INSERT INTO victims (name, phone_number, injury_detail, accidentid, pedestrian, vehicle_type, vehicle_name, license_plate) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");

            System.out.print("Enter victim name: ");
            String victimName = scanner.nextLine();
            System.out.print("Enter victim's phone number: ");
            String victimNumber = scanner.nextLine();
            System.out.print("Enter victim injury: ");
            String victimInjury = scanner.nextLine();

            stmt.setString(1, victimName);
            stmt.setString(2, victimNumber);
            stmt.setString(3, victimInjury);
            stmt.setInt(4, accidentId);

            System.out.print("Is the victim a pedestrian? (yes/no): ");
            String isPedestrian = scanner.nextLine();
            stmt.setString(5, isPedestrian);

            if (isPedestrian.equalsIgnoreCase("yes")) {
                stmt.setString(6, "-");
                stmt.setString(7, "-");
                stmt.setString(8, "-");
            } else if (isPedestrian.equalsIgnoreCase("no")) {
                System.out.print("Enter victims vehicle type: ");
                String vehicleType = scanner.nextLine();
                stmt.setString(6, vehicleType);

                System.out.print("Enter victims vehicle name: ");
                String vehicleName = scanner.nextLine();
                stmt.setString(7, vehicleName);

                System.out.print("Enter victims license plate: ");
                String licensePlate = scanner.nextLine();
                stmt.setString(8, licensePlate);
            }

            stmt.executeUpdate();
            stmt.close();
        } catch (SQLException e) {
            System.out.println("Error adding injured person: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
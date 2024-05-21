import java.sql.*;

public class AccidentDetail {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/traffic";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "";

    public void displayAccidentDetails(int accidentId) {
        try {
            Connection connection = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
            PreparedStatement statement = connection.prepareStatement("SELECT * FROM accident WHERE accident_id = ?");
            statement.setInt(1, accidentId);
            ResultSet resultSet = statement.executeQuery();

            if (resultSet.next()) {
                String date = resultSet.getString("date");
                String location = resultSet.getString("location");

                String numInj = resultSet.getString("num_injured");
                String desc = resultSet.getString("description");

                System.out.println("Accident Details");
                System.out.println("---------------------");
                System.out.println("Accident ID: " + accidentId);
                System.out.println("Date: " + date);
                System.out.println("Location: " + location);
                System.out.println("Number of people injured: " + numInj);
                System.out.println("Accident Description: " + desc);

                System.out.println("Injured People:");
                PreparedStatement victimStatement = connection.prepareStatement(
                        "SELECT name, phone_number, injury_detail, pedestrian, vehicle_type, vehicle_name, license_plate FROM victims WHERE accidentid = ?");
                victimStatement.setInt(1, accidentId);
                ResultSet victimResultSet = victimStatement.executeQuery();

                while (victimResultSet.next()) {
                    String name = victimResultSet.getString("name");
                    String phoneNumber = victimResultSet.getString("phone_number");
                    String injury = victimResultSet.getString("injury_detail");
                    String pedestrian = victimResultSet.getString("pedestrian");
                    String vehicleType = victimResultSet.getString("vehicle_type");
                    String vehicleName = victimResultSet.getString("vehicle_name");
                    String licensePlate = victimResultSet.getString("license_plate");

                    System.out.println("  - Name: " + name);
                    System.out.println("    Phone Number: " + phoneNumber);
                    System.out.println("    Injury: " + injury);

                    if (pedestrian.equalsIgnoreCase("yes")) {
                        System.out.println("    Pedestrian: Yes");

                    } else {
                        System.out.println("    Pedestrian: No");
                        System.out.println("     Vehicle Type: " + vehicleType);
                        System.out.println("     Vehicle Name: " + vehicleName);
                        System.out.println("     License Plate: " + licensePlate);
                    }
                }

                victimResultSet.close();
                victimStatement.close();

                System.out.println("Aggressors:");
                PreparedStatement aggressorStatement = connection.prepareStatement(
                        "SELECT name, phone_number, license_number, vehicle_type, vehicle_name, license_plate FROM aggressors WHERE accident_id = ?");
                aggressorStatement.setInt(1, accidentId);
                ResultSet aggressorResultSet = aggressorStatement.executeQuery();

                while (aggressorResultSet.next()) {
                    String name = aggressorResultSet.getString("name");
                    String phoneNumber = aggressorResultSet.getString("phone_number");
                    String licenseNumber = aggressorResultSet.getString("license_number");
                    String vehicleType = aggressorResultSet.getString("vehicle_type");
                    String vehicleName = aggressorResultSet.getString("vehicle_name");
                    String licensePlate = aggressorResultSet.getString("license_plate");

                    System.out.println("    Name: " + name);
                    System.out.println("    Phone Number: " + phoneNumber);
                    System.out.println("    License Number: " + licenseNumber);
                    System.out.println("    Vehicle Type: " + vehicleType);
                    System.out.println("    Vehicle Name: " + vehicleName);
                    System.out.println("    License Plate: " + licensePlate);
                }

                aggressorResultSet.close();
                aggressorStatement.close();
            } else {
                System.out.println("Accident not found with ID: " + accidentId);
            }

            resultSet.close();
            statement.close();
            connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
import java.sql.*;
import java.util.ArrayList;
import java.util.Scanner;

public class HomePage {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/traffic";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "";

    public void OverViewAccidents() {
        try {
            Connection connection = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
            Statement statement = connection.createStatement();
            ResultSet resultSet = statement.executeQuery("SELECT * FROM accident");

            ArrayList<String[]> rows = new ArrayList<>();
            while (resultSet.next()) {
                String accidentId = resultSet.getString("accident_id");
                String numInjured = resultSet.getString("num_injured");
                String date = resultSet.getString("date");
                String location = resultSet.getString("location");
                String desc = resultSet.getString("description");
                rows.add(new String[] { accidentId, numInjured, date, location,
                        desc });
            }

            resultSet.close();
            statement.close();
            connection.close();

            printAccidents(rows);

            System.out.println("OPTIONS");
            System.out.println("1. Display Accident Details");
            System.out.println("2. Update Accident");
            System.out.println("3. Add An Accident");
            System.out.println("4.Print Out Accident Details");
            System.out.println("5.Exit");

            Scanner scanner = new Scanner(System.in);
            int choice = 6;

            while (choice != 5) {

                System.out.print("Enter your choice: ");
                choice = scanner.nextInt();

                AccidentDetail accidentDetail = new AccidentDetail();
                AccidentForm accidentForm = new AccidentForm();

                switch (choice) {
                    case 1:
                        System.out.print("Enter the accident ID to view details (or 0 to exit): ");
                        int accidentId = scanner.nextInt();
                        if (accidentId != 0) {
                            accidentDetail.displayAccidentDetails(accidentId);
                        }
                        break;
                    case 2:
                        System.out.print("Enter the accident ID to update: ");
                        int accidentIdToUpdate = scanner.nextInt();
                        scanner.nextLine();

                        PreparedStatement statement2 = connection
                                .prepareStatement("SELECT * FROM accident WHERE accident_id = ?");
                        statement2.setInt(1, accidentIdToUpdate);
                        ResultSet resultSet2 = statement2.executeQuery();

                        if (resultSet2.next()) { // Fixed variable name

                            System.out.print("Enter the number of injured: ");
                            int numInjured = scanner.nextInt();
                            scanner.nextLine(); // Consume the newline character
                            System.out.print("Enter the location: ");
                            String location = scanner.nextLine();
                            System.out.print("Enter the date (yyyy-MM-dd): ");
                            String date = scanner.nextLine();
                            System.out.print("Enter the accident description: ");
                            String desc = scanner.nextLine();

                            UpdateAccident updateAccident = new UpdateAccident(String.valueOf(accidentIdToUpdate));
                            updateAccident.updateAccident(numInjured, date, location, desc);
                            updateAccident.addInjuredPeople();
                        } else {
                            System.out.println("Accident not found");
                        }

                        break;
                    case 3:
                        accidentForm.addAccident();
                        // Code for adding an accident
                        break;

                    case 4:
                        AccidentFilePrinter print = new AccidentFilePrinter();
                        print.printAccidentToFile();
                        break;
                    case 5:
                        System.out.println("Exiting...");
                        break;
                    default:
                        System.out.println("Invalid choice.");
                }
            }

            scanner.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void printAccidents(ArrayList<String[]> rows) {
        System.out.println("Accident List");
        System.out.println("---------------------");
        System.out.printf("%-15s %-15s %-15s %-10s %-15s%n",
                "Accident ID", "Num Injured", "Date", "Location", "Description");
        for (String[] row : rows) {
            System.out.printf("%-15s %-15s %-15s %-10s %-15s%n",
                    row[0], row[1], row[2], row[3], row[4]);
        }
        System.out.println();
    }
}
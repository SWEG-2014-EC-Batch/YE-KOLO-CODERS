
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

                public class ViewData {

                    public static void main(String[] args) {
                        try {
                            Class.forName("com.mysql.jdbc.Driver");
                            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/mydatabase", "username", "password");
                            Statement stmt = con.createStatement();
                            ResultSet rs = stmt.executeQuery("SELECT * FROM accident");

                            while (rs.next()) {
                                String accidentId = rs.getString("accident_id");
                                String victimName = rs.getString("victim_name");
                                String aggressorName = rs.getString("aggressor_name");
                                String numInjured = rs.getString("num_injured");
                                String date = rs.getString("date");
                                String location = rs.getString("location");
                                String vehicleType = rs.getString("vehicle_type");

                                System.out.println("Accident ID: " + accidentId);
                                System.out.println("Victim Name: " + victimName);
                                System.out.println("Aggressor Name: " + aggressorName);
                                System.out.println("Number of Injured: " + numInjured);
                                System.out.println("Date: " + date);
                                System.out.println("Location: " + location);
                                System.out.println("Vehicle Type: " + vehicleType);
                                System.out.println("-----------------------");
                            }

                            rs.close();
                            stmt.close();
                            con.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                }
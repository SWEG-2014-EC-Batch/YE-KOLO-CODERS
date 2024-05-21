import java.util.Scanner;

public class LoginFrame {

    public String username;
    public String password;

    public void login() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your username: ");
        username = scanner.nextLine();

        System.out.print("Enter your password: ");
        String password = scanner.nextLine();

        if (username.equals("admin") && password.equals("password")) {
            System.out.println("Login successful!");
            HomePage home = new HomePage();
            home.OverViewAccidents();
            // Perform actions after successful login
        } else {
            System.out.println("Incorrect password. Login failed!");
            // Perform actions for failed login attempt
        }

        scanner.close();
    }

}
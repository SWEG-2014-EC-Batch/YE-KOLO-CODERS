

import javax.swing.*;
        import java.awt.event.ActionEvent;
        import java.awt.event.ActionListener;
public class Choice {

    public static void main(String[] args) {
        // Create the frame
        JFrame frame = new JFrame("Database Operations");
        frame.setSize(400, 300);
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create the panel
        JPanel panel = new JPanel();
        panel.setBounds(0, 0, 400, 300);

        // Create the title label
        JLabel titleLabel = new JLabel("Database Operations");
        titleLabel.setBounds(150, 20, 200, 25);

        // Create the buttons
        JButton showButton = new JButton("Show data");
        showButton.setBounds(50, 80, 120, 25);
        showButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Show data" operation
                System.out.println("Showing data");
            }
        });

        JButton insertButton = new JButton("Insert data");
        insertButton.setBounds(220, 80, 120, 25);
        insertButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Insert data" operation
                System.out.println("Inserting data");
            }
        });

        JButton updateButton = new JButton("Update data");
        updateButton.setBounds(50, 130, 120, 25);
        updateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Update data" operation
                System.out.println("Updating data");
            }
        });

        JButton searchButton = new JButton("Search data");
        searchButton.setBounds(220, 130, 120, 25);
        searchButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Search data" operation
                System.out.println("Searching data");
            }
        });

        JButton deleteOneButton = new JButton("Delete one");
        deleteOneButton.setBounds(50, 180, 120, 25);
        deleteOneButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Delete one" operation
                System.out.println("Deleting one");
            }
        });

        JButton deleteAllButton = new JButton("Delete all");
        deleteAllButton.setBounds(220, 180, 120, 25);
        deleteAllButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Perform the "Delete all" operation
                System.out.println("Deleting all");
            }
        });

        // Add the components to the panel and the panel to the frame
        panel.add(titleLabel);
        panel.add(showButton);
        panel.add(insertButton);
        panel.add(updateButton);
        panel.add(searchButton);
        panel.add(deleteOneButton);
        panel.add(deleteAllButton);

        frame.add(panel);

        // Set the frame visible
        frame.setVisible(true);
    }
}
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main extends JFrame {
    final private Font mainFont = new Font("Segoe print", Font.BOLD, 18);
    JTextField textFirstName, textLastName;
    JLabel labelWelcome;

    public void initialize() {
        JLabel labelFirstName = new JLabel("First Name");
        labelFirstName.setFont(mainFont);

        textFirstName = new JTextField();
        textFirstName.setFont(mainFont);

        JLabel labelLastName = new JLabel("Last Name");
        labelLastName.setFont(mainFont);

        textLastName = new JTextField();
        textLastName.setFont(mainFont);

        JPanel formPanel = new JPanel();
        formPanel.setLayout(new GridLayout(4, 1, 5, 5));
        formPanel.setOpaque(false);
        formPanel.add(labelFirstName);
        formPanel.add(textFirstName);
        formPanel.add(labelLastName);
        formPanel.add(textLastName);

        labelWelcome = new JLabel();
        labelWelcome.setFont(mainFont);

        JButton okButton = new JButton("OK");
        okButton.setFont(mainFont);
        okButton.addActionListener(new ActionListener(){

            @Override
            public void actionPerformed(ActionEvent e) {
                // TODO Auto-generated method stub
               String firstName = textFirstName.getText();
               String lastName = textLastName.getText();
               labelWelcome.setText("Hello " + firstName + " " + lastName);
            }   
        });

        JButton btnClear = new JButton("Clear");
        btnClear.setFont(mainFont);
        btnClear.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e){
                textFirstName.setText(" ");
                labelFirstName.setText(" ");
                labelWelcome.setText(" ");
            }
        });

        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(1, 2, 5, 5));
        buttonPanel.setOpaque(false);
        buttonPanel.add(okButton);
        buttonPanel.add(btnClear);

        JPanel mainPanel = new JPanel();
        mainPanel.setLayout(new BorderLayout());
        mainPanel.setBackground(new Color(128, 128, 255));
        mainPanel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        mainPanel.add(formPanel, BorderLayout.NORTH);
        mainPanel.add(labelWelcome, BorderLayout.CENTER);
        mainPanel.add(buttonPanel, BorderLayout.SOUTH);

        add(mainPanel);

        setTitle("Welcome");
        setSize(500, 600);
        setMinimumSize(new Dimension(300, 400));
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);

    }

    public static void main(String[] args) {
        Main myFrame = new Main();
        myFrame.initialize();

    }
}

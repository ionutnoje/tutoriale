import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{

    JTextField textField;
    JButton button;

    public MyFrame()
    {
         textField = new JTextField();
         button = new JButton("send");


        //BUTTON
        button.addActionListener(this);




        //TEXTFIELD
        textField.setPreferredSize(new Dimension(250,40));
        textField.setFont(new Font("Consolas",Font.PLAIN,35));
        textField.setForeground(new Color(120,50,140));
        textField.setBackground(Color.black);
        textField.setCaretColor(Color.WHITE);
        textField.setText("username");
        textField.setEditable(false);


        //FRAME

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(textField);
        this.add(button);
        this.pack();










        this.setVisible(true);
    }




    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == button)
        {
            System.out.println("welcome " + textField.getText());
        }
    }
}

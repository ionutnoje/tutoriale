import javax.swing.*;
import java.awt.*;

public class NewWindow
{
    JFrame frame = new JFrame();
    JLabel label = new JLabel("hello");


    public NewWindow ()
    {
        //FRAME

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.add(label);



        //LABEL
        label.setBounds(0,0,100,50);
        label.setFont(new Font(null, Font.PLAIN,25));





        frame.setVisible(true);
    }
}

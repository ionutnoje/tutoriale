import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame
{


    public MyFrame()
    {
        ImageIcon image = new ImageIcon("GUI/src/314457.jpg");
        this.setTitle("the title goes here");//sets title of frame
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//exit out of application
        this.setSize(500,500);//sets the x-dimension and the y dimension on frame
        this.setResizable(false);//prevent frame from being resized
        this.setIconImage(image.getImage());//seteaza imaginea din colt stanga
        this.setVisible(true);//makes frame visible
        //frame.getContentPane().setBackground(Color.RED);//change color of background
        this.getContentPane().setBackground(new Color(120,50,250));//background color with rgb gradients
        //frame.getContentPane().setBackground(new Color(0x123456));
    }

}

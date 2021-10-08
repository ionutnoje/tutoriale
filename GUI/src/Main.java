import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {
//
//        //JFrame = a GUI window to add components to
//
//        METODA 1: tot codul se scrie in main
//
//        ImageIcon image = new ImageIcon("GUI/src/314457.jpg");
//
//        JFrame frame = new JFrame(); // creats a frame
//        frame.setTitle("the title goes here");//sets title of frame
//        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//exit out of application
//        frame.setSize(500,500);//sets the x-dimension and the y dimension on frame
//        frame.setResizable(false);//prevent frame from being resized
//        frame.setIconImage(image.getImage());//seteaza imaginea din colt stanga
//        frame.setVisible(true);//makes frame visible
//        //frame.getContentPane().setBackground(Color.RED);//change color of background
//        frame.getContentPane().setBackground(new Color(120,50,250));//background color with rgb gradients
//        //frame.getContentPane().setBackground(new Color(0x123456));




        //METODA 2: se creaza o clasa separata pentru frame si o instantiem in main
        MyFrame myFrame = new MyFrame();



    }
}

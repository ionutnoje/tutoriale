import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        //Layout Manager = Defines the natural layout for components within a container

        //GridLayout =  places components in a gris of cells.
        //              Each component takes all the available space within its cell,
        //              and each cell s the same size


        JFrame frame = new JFrame();
        JButton button1 = new JButton("1");
        JButton button2 = new JButton("2");
        JButton button3 = new JButton("3");
        JButton button4 = new JButton("4");
        JButton button5 = new JButton("5");
        JButton button6 = new JButton("6");
        JButton button7 = new JButton("7");
        JButton button8 = new JButton("8");
        JButton button9 = new JButton("9");



        //FRAME
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(new GridLayout(3,3,5,5));
        frame.setResizable(false);

        frame.add(button1);
        frame.add(button2);
        frame.add(button3);
        frame.add(button4);
        frame.add(button5);
        frame.add(button6);
        frame.add(button7);
        frame.add(button8);
        frame.add(button9);




















        frame.setVisible(true);//ramane la final ca sa nu existe erori
    }
}

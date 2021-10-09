import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        //Layout Manager = Defines the natural layout for components within a container
        //
        // 3 common managers
        //
        //BorderLayout = A BorderLayout places components in five areas: NORTH, SOUTH, WEST, EAST, CENTER.
        //               All extra space is placed in the center area

        JFrame frame = new JFrame();
        JPanel panel1 = new JPanel();
        JPanel panel2 = new JPanel();
        JPanel panel3 = new JPanel();
        JPanel panel4 = new JPanel();
        JPanel panel5 = new JPanel();


        //FRAMES

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(new BorderLayout(10,10));
        frame.add(panel1,BorderLayout.NORTH);
        frame.add(panel2,BorderLayout.WEST);
        frame.add(panel3,BorderLayout.SOUTH);
        frame.add(panel4,BorderLayout.EAST);
        frame.add(panel5,BorderLayout.CENTER);
        frame.setResizable(true);
        frame.setVisible(true);



        //PANELS
        panel1.setBackground(Color.blue);
        panel2.setBackground(Color.red);
        panel3.setBackground(Color.green);
        panel4.setBackground(Color.pink);
        panel5.setBackground(Color.magenta);

        panel1.setPreferredSize(new Dimension(100,100));
        panel2.setPreferredSize(new Dimension(100,100));
        panel3.setPreferredSize(new Dimension(100,100));
        panel4.setPreferredSize(new Dimension(100,100));
        panel5.setPreferredSize(new Dimension(100,100));




        //SUBPANELS pe care le atasam la panel5....cel din centru


        JPanel panel6 = new JPanel();
        JPanel panel7 = new JPanel();
        JPanel panel8 = new JPanel();
        JPanel panel9 = new JPanel();
        JPanel panel10 = new JPanel();



        panel6.setBackground(Color.black);
        panel7.setBackground(Color.gray);
        panel8.setBackground(Color.blue);
        panel9.setBackground(Color.cyan);
        panel10.setBackground(new Color(120,50,140));

        panel5.setLayout(new BorderLayout(7,7));

        panel6.setPreferredSize(new Dimension(50,50));
        panel7.setPreferredSize(new Dimension(50,50));
        panel8.setPreferredSize(new Dimension(50,50));
        panel9.setPreferredSize(new Dimension(50,50));
        panel10.setPreferredSize(new Dimension(50,50));



        panel5.add(panel6,BorderLayout.NORTH);
        panel5.add(panel7,BorderLayout.SOUTH);
        panel5.add(panel8,BorderLayout.WEST);
        panel5.add(panel9,BorderLayout.EAST);
        panel5.add(panel10,BorderLayout.CENTER);



    }
}

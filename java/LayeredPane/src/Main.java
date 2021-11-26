import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        //LayeredPane = Swing container that provides a
        //              third dimension for positioning components
        //              ex. depth,  Z- index


        //Default -> Palette -> Modal -> PopUp -> Drag
        //ordinea panelulilor de la cel din spate pana la cel din fata



        JLayeredPane layeredPane = new JLayeredPane();
        JFrame frame = new JFrame();
        JLabel label1 = new JLabel();
        JLabel label2 = new JLabel();
        JLabel label3 = new JLabel();


        //FRAME

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.add(layeredPane);




        //LAYERED PANE
        layeredPane.setBounds(0,0,500,500);
        //layeredPane.add(label1, JLayeredPane.DEFAULT_LAYER);      //default layer este cel mai dejos
        layeredPane.add(label1, Integer.valueOf(0));                //pentru label1 se mai poate face si asa(si e mai usor):
        //layeredPane.add(label2, JLayeredPane.DEFAULT_LAYER);
        layeredPane.add(label2, Integer.valueOf(2));
        //layeredPane.add(label3, JLayeredPane.DRAG_LAYER);
        layeredPane.add(label3, Integer.valueOf(1));





        //LABELS
        label1.setOpaque(true);
        label1.setBackground(Color.RED);
        label1.setBounds(50,50,200,200);

        label2.setOpaque(true);
        label2.setBackground(Color.BLUE);
        label2.setBounds(100,100,200,200);

        label3.setOpaque(true);
        label3.setBackground(Color.GREEN);
        label3.setBounds(150,150,200,200);




        frame.setVisible(true);

    }
}

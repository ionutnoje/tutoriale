import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        //JPanel = a Gui component that functions as a container to hold other componente


        JFrame frame = new JFrame();
        JPanel redPanel = new JPanel();
        JPanel bluePanel = new JPanel();
        JPanel greenPanel = new JPanel();
        JLabel label = new JLabel();
        ImageIcon image = new ImageIcon(new ImageIcon("panels/src/dude1.jpg").getImage().getScaledInstance(75,75,Image.SCALE_DEFAULT));


        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);
        frame.setSize(750,750);
        frame.setVisible(true);


        redPanel.setBackground(Color.red);
        redPanel.setBounds(0,0,250,250);
        //redPanel.setLayout(new BorderLayout());//folosind asta o sa puna label ul pe panel in mod automat
                                                //daca il setam pe null atunci nu o sa apara pe frame pana nu
                                                //specificam coordonatele unde vrem sa fie pus
        redPanel.setLayout(null);
        frame.add(redPanel);
        //redPanel.add(label);



        bluePanel.setBackground(Color.blue);
        bluePanel.setBounds(250,0,250,250);
        frame.add(bluePanel);
        //bluePanel.setLayout(new BorderLayout());//folosind asta o sa puna label ul pe panel in mod automat
                                                //daca il setam pe null atunci nu o sa apara pe frame pana nu
                                                //specificam coordonatele unde vrem sa fie pus
        bluePanel.setLayout(null);
        bluePanel.add(label);


        greenPanel.setBackground(Color.green);
        greenPanel.setBounds(0,250,500,250);
        frame.add(greenPanel);
        //greenPanel.setLayout(new BorderLayout());//folosind asta o sa puna label ul pe panel in mod automat
                                                //daca il setam pe null atunci nu o sa apara pe frame pana nu
                                                //specificam coordonatele unde vrem sa fie pus
        greenPanel.setLayout(null);
        //greenPanel.add(label);




        label.setText("hi");
        label.setIcon(image);
        label.setVerticalAlignment(JLabel.BOTTOM);
        label.setHorizontalAlignment(JLabel.RIGHT);
        label.setBounds(0,0,75,75);//o sa seteze pozitia relativ la palelul la care a fost adaugat adica aici bluePanel.add(label);
                                                    //deci in acest caz o sa fie asezat in coltul stanga sus in panelul albastru





    }
}

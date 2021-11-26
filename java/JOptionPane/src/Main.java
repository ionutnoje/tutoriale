import javax.swing.*;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        //JOptionPane = pop up standard dialog box that prompts users foa a value
        //              or informs them of something


        ImageIcon icon = new ImageIcon(new ImageIcon("JOptionPane/src/dude.jpg").getImage().getScaledInstance(30,30,Image.SCALE_DEFAULT));



        //SHOW MESSAGE DIALOG


        //JOptionPane.showMessageDialog(null,"this is some useless text","title",JOptionPane.PLAIN_MESSAGE);
        //JOptionPane.showMessageDialog(null,"this is some useless text","title",JOptionPane.INFORMATION_MESSAGE);
        //JOptionPane.showMessageDialog(null,"this is some useless text","title",JOptionPane.QUESTION_MESSAGE);
        //JOptionPane.showMessageDialog(null,"this is some useless text","title",JOptionPane.WARNING_MESSAGE);
        //JOptionPane.showMessageDialog(null,"this is some useless text","title",JOptionPane.ERROR_MESSAGE);


        //SHOW CONFIRM DIALOG


        //JOptionPane.showConfirmDialog(null,"bor, do you even code?","this is the title",JOptionPane.YES_NO_CANCEL_OPTION);
        //daca punem linia de mai sus intr un sout o sa apiseze niste valori intregi..pentru x o sa fie -1, pt yes 0, no 1,cancel 2
        //adica asa
        //System.out.println(JOptionPane.showConfirmDialog(null,"bor, do you even code?","this is the title",JOptionPane.YES_NO_CANCEL_OPTION));
        //putem sa salvam valorile intregi de la raspuns pentru urmatoare operatii
        //adica asa
        //int raspuns = JOptionPane.showConfirmDialog(null,"bor, do you even code?","this is the title",JOptionPane.YES_NO_CANCEL_OPTION);



        //SHOW INPUT DIALOG


//        String name = JOptionPane.showInputDialog("what is your name? ");
//        System.out.println("hello" + name);



        //SHOW OPTION DIALOG

        String[] responses = {"No, you're awesome!","thank you","blush"};

        JOptionPane.showOptionDialog
                (
                null,
                "you are awesome!",
                "awesome title",
                JOptionPane.YES_NO_CANCEL_OPTION,
                JOptionPane.INFORMATION_MESSAGE,
                icon,
                responses,
                0
                );

        //putem sa adaugam si optiunile noastre dar trebuie sa construin un vector de stringuri pentru asta



    }
}

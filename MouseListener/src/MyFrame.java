import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MyFrame extends JFrame implements MouseListener
{
    JLabel label;
    ImageIcon smile;
    ImageIcon pain;
    ImageIcon nervous;
    ImageIcon dizzy;

    public MyFrame()
    {
        label = new JLabel();
        smile = new ImageIcon(new ImageIcon("MouseListener/src/smile.png").getImage().getScaledInstance(400,400,Image.SCALE_DEFAULT));
        pain = new ImageIcon(new ImageIcon("MouseListener/src/pain.png").getImage().getScaledInstance(400,400,Image.SCALE_DEFAULT));
        nervous = new ImageIcon(new ImageIcon("MouseListener/src/nervous.png").getImage().getScaledInstance(400,400,Image.SCALE_DEFAULT));
        dizzy = new ImageIcon(new ImageIcon("MouseListener/src/dizzy1.png").getImage().getScaledInstance(400,400,Image.SCALE_DEFAULT));





        //Label

        //label.setBackground(Color.red);
        label.setOpaque(true);
        label.addMouseListener(this);//scriem numai this deoarece implementam interfata mouselistener
                                        //daca in loc de label scriem this.addMouseListener toate o sa se aplice pe frame


        //label.setBounds(0,0,100,100);
        label.setIcon(smile);

        //Frame

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.add(label);
        this.pack();
        this.setLocationRelativeTo(null);

        this.setVisible(true);
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        //invoked when the mouse button has been clicked(pressed and released) on a component
        System.out.println("you clicked the mouse");

    }

    @Override
    public void mousePressed(MouseEvent e) {
        //invoked when a mouse button has been pressed on a component
        System.out.println("you pressed the mouse");
        //label.setBackground(new Color(120,40,150));
        label.setIcon(pain);
    }

    @Override
    public void mouseReleased(MouseEvent e) {
        //invoked when a mouse button has been released on a component
        System.out.println("you released the mouse");
        //label.setBackground(Color.MAGENTA);
        label.setIcon(dizzy);

    }

    @Override
    public void mouseEntered(MouseEvent e) {
        //invoked when the mouse enters a component
        System.out.println("you entered the mouse in the red square");
        //label.setBackground(Color.GREEN);
        label.setIcon(nervous);

    }

    @Override
    public void mouseExited(MouseEvent e) {
        //invoked when the mouse exits a component
        System.out.println("you exited the mouse from the red square");
        //label.setBackground(Color.RED);
        label.setIcon(smile);


    }
}

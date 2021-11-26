import javax.swing.*;
import javax.swing.plaf.ColorUIResource;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class MyFrame extends JFrame implements KeyListener
{

    JLabel label;

    public MyFrame()
    {

        //Label
        label = new JLabel();
        label.setBounds(0,0,100,100);
        label.setBackground(new Color(120,40,150));
        label.setOpaque(true);




        //Frame

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setLayout(null);
        this.addKeyListener(this);
        this.add(label);
        this.setVisible(true);
    }


    @Override
    public void keyTyped(KeyEvent e) {
    //keyTyped = Invoked when a key is typed. Uses KeyChar, char output
        switch (e.getKeyChar())
        {
            case 'a': label.setLocation(label.getX()-10,label.getY());break;
            case 'w': label.setLocation(label.getX(),label.getY() - 10);break;
            case 's': label.setLocation(label.getX(),label.getY() + 10);break;
            case 'd': label.setLocation(label.getX() + 10,label.getY());break;

        }
    }

    @Override
    public void keyPressed(KeyEvent e) {
    //keyPressed = Invoked when a phydical kay is pressed sown. Uses kayCode, int output
        switch (e.getKeyCode())
        {
            case 37: label.setLocation(label.getX()-10,label.getY());break;
            case 38: label.setLocation(label.getX(),label.getY() - 10);break;
            case 39: label.setLocation(label.getX()+ 10,label.getY());break;
            case 40: label.setLocation(label.getX(),label.getY() + 10);break;

        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
    //keyReleased = called whenever a button is released
        System.out.println("You released key; char: " + e.getKeyChar());
        System.out.println("You released key; code: " + e.getKeyCode());

    }
}

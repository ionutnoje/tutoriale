import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{
    JRadioButton pizzaButton;
    JRadioButton hamburgerButton;
    JRadioButton hotdogButton;
    ButtonGroup group = new ButtonGroup();
    ImageIcon imagine;

    public MyFrame()
    {
        imagine = new ImageIcon(new ImageIcon("radio buttons/src/imagine.jpg").getImage().getScaledInstance(20,20,Image.SCALE_DEFAULT));


        //BUTTONS
        pizzaButton = new JRadioButton("pizza");
        hamburgerButton = new JRadioButton("hamburger");
        hotdogButton = new JRadioButton("hotdog");

        pizzaButton.addActionListener(this);
        hamburgerButton.addActionListener(this);
        hotdogButton.addActionListener(this);


        pizzaButton.setIcon(imagine);
        hamburgerButton.setIcon(imagine);
        hotdogButton.setIcon(imagine);


        //Button Group

        group.add(pizzaButton);
        group.add(hamburgerButton);
        group.add(hotdogButton);




        //FRAME

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(pizzaButton);
        this.add(hamburgerButton);
        this.add(hotdogButton);



        this.pack();


        this.setVisible(true);

    }




    @Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == pizzaButton)
        {
            System.out.println("ai comandat pizza");
        }
        else if(e.getSource() == hamburgerButton)
        {
            System.out.println("ai comandat hamburger");
        }
        else if(e.getSource() == hotdogButton)
        {
            System.out.println("ai comandat hotdog");
        }
    }
}

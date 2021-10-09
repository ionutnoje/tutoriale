import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{

    JCheckBox checkBox = new JCheckBox();
    JButton button = new JButton();
    ImageIcon xIcon;
    ImageIcon checkIcon;

    public MyFrame()
    {
        //ICONS

        xIcon = new ImageIcon(new ImageIcon("checkbox/src/ferrari.jpg").getImage().getScaledInstance(20,20,Image.SCALE_DEFAULT));
        checkIcon = new ImageIcon(new ImageIcon("checkbox/src/dude.jpg").getImage().getScaledInstance(20,20,Image.SCALE_DEFAULT));





        //BUTTON

        button.setText("submin");
        button.addActionListener(this);




        //Chechbox

        checkBox.setText("I'm not a robot");
        checkBox.setFocusable(false);
        checkBox.setFont(new Font("Consolas",Font.PLAIN,25));
        checkBox.setIcon(xIcon);
        checkBox.setSelectedIcon(checkIcon);



        //FRAME

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(checkBox);
        this.add(button);
        this.pack();


        this.setVisible(true);

    }






    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == button)
        {
            System.out.println(checkBox.isSelected());
        }
    }
}



import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{
    JButton button;
    JLabel label;

    public MyFrame()
    {
        button = new JButton("pick a color");
        label = new JLabel();

        //Label
        label.setBackground(Color.WHITE);
        label.setOpaque(true);
        label.setText("this is some text");
        label.setFont(new Font("MV Boli",Font.BOLD,100));



        //Button
        button.addActionListener(this);



        //Frame


        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(button);
        this.add(label);


        this.pack();
        this.setVisible(true);

    }



    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource() == button)
        {
            JColorChooser colorChooser = new JColorChooser();
            Color color = JColorChooser.showDialog(null,"pick a color",Color.BLACK);
            //label.setForeground(color);
            label.setBackground(color);

        }
    }
}

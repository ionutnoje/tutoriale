import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LaunchPage implements ActionListener
{
    JFrame frame = new JFrame();
    JButton button = new JButton("new window");

    public LaunchPage()
    {
        //FRAME

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(null);
        frame.add(button);


        frame.setVisible(true);


        //BUTTON

        button.setBounds(100,160,200,40);
        button.setFocusable(false);
        button.addActionListener(this);





    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource() == button)
        {
            frame.dispose();//iese din prima pagina
            NewWindow mywindow = new NewWindow();
        }

    }
}

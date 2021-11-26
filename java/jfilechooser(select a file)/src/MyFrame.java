import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

public class MyFrame extends JFrame implements ActionListener
{

    JButton button;

    public MyFrame()
    {

        //Button
        button = new JButton("select a file");
        button.addActionListener(this);




        //Frame
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(button);

        this.pack();
        this.setVisible(true);



    }




    @Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == button)
        {
            JFileChooser fileChooser = new JFileChooser();
            //int response = fileChooser.showOpenDialog(null); //select a file to open
            //System.out.println(fileChooser.showOpenDialog(null));//cand apasam pe open primim 0 si cand apasam cancel primim 1

            int response = fileChooser.showSaveDialog(null);//select file to save

            if(response == JFileChooser.APPROVE_OPTION)
            {
                File file = new File(fileChooser.getSelectedFile().getAbsolutePath());
                System.out.println(file);

            }

        }
    }
}

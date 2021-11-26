import javax.swing.*;
import java.awt.*;

public class ProgressBarDemo
{
    JFrame frame = new JFrame();
    JProgressBar bar = new JProgressBar();

    public ProgressBarDemo()
    {
        //progressbar

        bar.setValue(0);                                //valoarea de la care incepe
        bar.setBounds(0,0,500,50);
        bar.setStringPainted(true);                     //afiseaza procentul pe bara
        bar.setFont(new Font("MV Boli",Font.BOLD,25));
        bar.setForeground(Color.red);
        bar.setBackground(Color.black);


        //FRAME
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(null);
        frame.add(bar);

        frame.setVisible(true);

        fill();
    }


    public void fill()
    {
        int counter = 0;

        while(counter < 100)
        {
            bar.setValue(counter);
            try{
                Thread.sleep(50);
            }
            catch (InterruptedException e)
            {
                e.printStackTrace();
            }
            counter += 1;

        }
        bar.setString("DONE");

    }


}

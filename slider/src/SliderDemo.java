import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import java.awt.*;

public class SliderDemo implements ChangeListener
{
    JFrame frame;
    JPanel panel;
    JLabel label;
    JSlider slider;


    public SliderDemo()
    {
        //SLIDER

        slider = new JSlider(0,100,50);
//        slider.setMinimum(0);
//        slider.setMinimum(100);
        slider.setPreferredSize(new Dimension(400,200));
        slider.setPaintTicks(true);
        slider.setMinorTickSpacing(10);

        slider.setPaintTrack(true);
        slider.setMajorTickSpacing(25);


        slider.setPaintLabels(true);
        slider.setFont(new Font("MV Boli",Font.PLAIN,15));


        slider.setOrientation(SwingConstants.VERTICAL);

        slider.addChangeListener(this);



        //LABEL

        label = new JLabel();
        label.setText("grade = " + slider.getValue());
        label.setFont(new Font("MV Boli",Font.PLAIN,20));





        //PANEL

        panel = new JPanel();
        panel.add(slider);
        panel.add(label);








        //FRAME

        frame = new JFrame("slider demo");
        frame.add(panel);
        frame.setSize(500,500);
        frame.setVisible(true);


    }

    @Override
    public void stateChanged(ChangeEvent e) {

        label.setText("grade = " + slider.getValue());

    }
}

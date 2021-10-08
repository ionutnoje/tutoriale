import javax.swing.*;

public class Main
{
    public static void main(String[] args) {

        //JFrame = a GUI window to add components to

        JFrame frame = new JFrame(); // creats a frame
        frame.setTitle("the title goes here");//sets title of frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//exit out of application
        frame.setSize(500,500);//sets the x-dimension and the y dimension on frame
        frame.setResizable(false);//prevent frame from being resized

        frame.setVisible(true);//makes frame visible
    }
}

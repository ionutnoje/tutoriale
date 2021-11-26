import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {

        Scanner sc = new Scanner(System.in);

        File file = new File("audio/src/sample1.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);



        System.out.println("P = play, S = Stop, R = Reser, Q = Quit");
        System.out.println("enter your choice: ");


        String response = "";

        while(!response.equals("Q"))
        {
            response = sc.next();
            response = response.toUpperCase();


            switch (response)
            {
                case ("P"): clip.start();
                break;
                case ("S"): clip.stop();
                break;
                case ("R"): clip.setMicrosecondPosition(0);
                break;
                case ("Q"): clip.close();
                break;
                default: System.out.println("not a valid response");

            }

        }




        clip.start();

    }
}

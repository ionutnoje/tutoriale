import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;

public class Main
{
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException {

        File file = new File("");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();

    }
}

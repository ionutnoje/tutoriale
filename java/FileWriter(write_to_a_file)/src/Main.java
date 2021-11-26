import java.io.FileWriter;
import java.io.IOException;

public class Main
{
    public static void main(String[] args) throws IOException {

        try{

            FileWriter writer = new FileWriter("FileWriter(write_to_a_file)/src/fisier.txt");
            writer.write("roses are red\n");
            writer.append("a poem by noje");
            writer.close();
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }

    }
}

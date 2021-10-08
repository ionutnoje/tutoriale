import java.util.Random;

public class DiceRoller
{
    int number;
    Random random;

    DiceRoller()
    {
        random = new Random();
        //int number = 0;//este vizibil numai pentru metoda DiceRoller

        roll();
    }

    void roll()
    {
        number = random.nextInt(6)+1;
        System.out.println(number);
    }
}

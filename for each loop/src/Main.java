import java.util.ArrayList;

public class Main
{
    public static void main(String[] args)
    {

        //for-each = traversing technique to iterate through the elements in an arrat/collection
        //               less steps, more readable
        //               less flexible


        String[] animals = {"cat", "dog", "rat", "bird"};

        for(String i : animals)
        {
            System.out.println(i);
        }


        ArrayList<String> animals1 = new ArrayList<String>();
        animals1.add("cat");
        animals1.add("dog");
        animals1.add("rat");
        animals1.add("bird");

        for(String i : animals1)
        {
            System.out.println(i);
        }





    }
}

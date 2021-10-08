import java.util.ArrayList;

public class Main
{
    public static void main(String[] args) {

        //ArrayList = a resizable array.
        //            elements can be added and removed after compilation phase
        //            store reference data types


        ArrayList<String> food= new ArrayList<String>();

        food.add("pizza");
        food.add("hotdog");
        food.add("mici");

        for(int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }


        food.set(0, "nu mai este pizza, acum este hamburger");
        System.out.println("");
        for(int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }

        food.remove(2);
        System.out.println("\nlista fara mici:");
        for(int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }


        food.clear();//eliberarea listei



    }
}

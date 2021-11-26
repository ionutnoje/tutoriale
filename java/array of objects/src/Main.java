public class Main
{
    public static void main(String[] args) {

//        int[] numbers = new int[3];
//        char[] characters = new char[4];        //array examples
//        String[] strings = new String[5];


        Food[] refrigerator = new Food[3];

        Food food1 = new Food("pizza");
        Food food2 = new Food("ciorba");
        Food food3 = new Food("hotdog");

        refrigerator[0] = food1;
        refrigerator[1] = food2;
        refrigerator[2] = food3;

        System.out.println(refrigerator[0].name);
        System.out.println(refrigerator[1].name);
        System.out.println(refrigerator[2].name);




    }
}

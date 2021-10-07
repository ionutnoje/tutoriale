import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {

        //1D array
        //
//        String[] cars = new String[10];
//        Scanner sc = new Scanner(System.in);
//
//
//        for(int i = 1; i <= 9; i++)
//        {
//            cars[i] = sc.next();
//        }
//        for(int i = 1; i <= 9; i++)
//        {
//            System.out.print(cars[i]);
//        }



        //2D array

        String[][] cars = new String[3][3];
        Scanner scaner = new Scanner(System.in);


        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                System.out.println("cars[" + i + "][" + j + "]= ");
                cars[i][j] = scaner.next();
            }
        }


        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                System.out.println("cars[" + i + "][" + j + "]= " + cars[i][j]);

            }
        }



    }
}


































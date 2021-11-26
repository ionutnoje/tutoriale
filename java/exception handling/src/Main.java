import java.util.InputMismatchException;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {

       //exception = an event that occurs during the execution of a program that,
       //           disrupts the normal flow of instructions


    Scanner sc = new Scanner(System.in);

    try
    {
        System.out.println("introduceti un nr: ");
        int x = sc.nextInt();

        System.out.println("introduceti un nr: ");  //codul care credem ca poate sa dea eroare sau este "periculos" il incapsulam in blocul try
        int y = sc.nextInt();

        int z = x / y;

        System.out.println("result " + z);

    }
    catch (ArithmeticException e)
    {
        System.out.println("nu poti imparti la 0");
    }
    catch (InputMismatchException e)
    {
        System.out.println("va rog introduceti un numar");
    }
    catch (Exception e)
    {
        System.out.println("ceva nu a functionat cum trebuie");
    }
    finally
    {
        sc.close();//blocul finally este util pentru a inchide orice scanner pornit sau fisiere deschise
    }






    }
}

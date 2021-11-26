package package2;
import package1.*;

public class Asub extends A
{
    public static void main(String[] args) {

        Asub asub = new Asub();
        // avem acces la protectedMessage din clasa A pentru ca desi este protected
        // clasa Asub este o subclasa a clasei A deci primim acces la mesajul protected

        System.out.println(asub.protectedMessage);

    }
}

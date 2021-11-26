public class Main
{
    public static void main(String[] args) {


        //object = an instance of a class that may contain attributes and methods
        //example: (phone, desk, computer, coffee cup)

        Car myCar = new Car();

        System.out.println(myCar.make);
        System.out.println(myCar.model);

        myCar.drive();
        myCar.brake();


        //codul asta merge pentru o singura masina...deoarece nu avem constructori ccare sa
        //ne lase sa folosim clasa car pentru mai multe tipuri de maini


    }
}

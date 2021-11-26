public class Main
{
    public static void main(String[] args)
    {

        // Encapsulation =  attributes of a class will be hidden nor private
        //                  Can be accessed only through methods (getters & setters)
        //                  You should make attributes private if you don't have a reason to make them public/protected


        Car car = new Car("ferrari","458",2013);

        System.out.println(car.getMake());
        System.out.println(car.getModel());
        System.out.println(car.getYear());

        car.setYear(2020);

        System.out.println(car.getMake());
        System.out.println(car.getModel());
        System.out.println(car.getYear());




        //elementele private ale unei clase pot sa fie accesate prin utilizarea de gettere si settere

    }
}

public class Main
{
    public static void main(String[] args)
    {

        // Encapsulation =  attributes of a class will be hidden nor private
        //                  Can be accessed only through methods (getters & setters)
        //                  You should make attributes private if you don't have a reason to make them public/protected







        //prima metoda...se copiaza informatia dupa ce a fost instantiat al doilea obiect



//        Car car1 = new Car("ferrari","458",2013);
//        Car car2 = new Car("ferrari","812",2020);
//
//        car2.copy(car1);
//
//        System.out.println(car1);
//        System.out.println(car2);
//        System.out.println();
//        System.out.println(car1.getMake());
//        System.out.println(car1.getModel());
//        System.out.println(car1.getYear());
//        System.out.println();
//        System.out.println(car2.getMake());
//        System.out.println(car2.getModel());
//        System.out.println(car2.getYear());
//
//
//
//        //daca scriem car1 = car2...practic o sa copiem tot de la car 1 in car2...inclusiv adresa de memorie deci
//        //nu mai avem doua obiecte distincte prin locuri diferite de memorie ci avem un singur obiect dar acum are 2 nume








        //a doua metoda....a doua masina o sa copieza informatia de la prima masina printr-un
        //constructor de copiere



        Car car1 = new Car("ferrari","458",2020);
        Car car2 = new Car(car1);

        System.out.println(car1);
        System.out.println(car2);
        System.out.println();
        System.out.println(car1.getMake());
        System.out.println(car1.getModel());
        System.out.println(car1.getYear());
        System.out.println();
        System.out.println(car2.getMake());
        System.out.println(car2.getModel());
        System.out.println(car2.getYear());





























    }
}

public class Main
{
    public static void main(String[] args) {

        //polymorphism = greek word for poly- "many" , morph- "form"
        //              the ability of an object to identify as more than one type


        //daca vrem sa face mun vector de obiecte in care sa salvam si car si bicycle si si boat
        //trebuie sa folosim polimorfismul...clasele Car,Bicycle si Boat sunt toste subclase ale Vehicle
        //deci daca vrem sa face mun vector cu toate cele 3 tipuri de "vehicule" trebuie sa facem un vector de tipul
        //clasei Vehicle

        Car car = new Car();
        Bicycle bicycle = new Bicycle();
        Boat boat = new Boat();


        Vehicle[] racers = {car,bicycle,boat};

//        car.go();
//        bicycle.go();
//        boat.go();

        for(Vehicle x : racers)
        {
            x.go();
        }



    }
}

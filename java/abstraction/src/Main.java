public class Main
{
    public static void main(String[] args) {

        //abstract = abstract classes cannot be instantiated, but they can have a subclass
        //           abstract methods are declared without an implementation


        Car car = new Car();
        //Vehicle vehicle = new Vehicle();  // nu putem instantia daca clasa Vehicle e de tip abstract

        car.go();

    }
}









//este folosita ca sa aiba clase copil.....mergi sa cumperi o masina si te intreaba de ce tip sa fie
//si tu zici ca un vehicul oarecare....e prea vag...dar cu clasa asta(baza) putem sa cream alte clase copil
//care sa fie mai explicite...de ex clasa masina....este un copil al clasei vehicle...si o putem instantia
//clasele de tip abstract nu pot sa fie accesate in main...e ca un mecanism de protectie...nu da voie sa fie accesata







public class Main
{
    public static void main(String[] args) {

        Garage garage = new Garage();

        Car car = new Car("ferrari");
        Car car1 = new Car("apollo");
        Car car2 = new Car("lamborghini");

        garage.park(car);
        garage.park(car1);
        garage.park(car2);
    }
}

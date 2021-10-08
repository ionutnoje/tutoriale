public class Car extends Vehicle
{                   //ca sa putem folosi clasa Car trebuie ori sa fie si ea abstracta ori sa
                    //implementeze metoda abstracta din clasa Vehicles
    @Override
    void go()
    {
        System.out.println("the driver is driving the car");
    }
}

import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {

        //polymorphism = many shapes/forms
        //dynamic = after compilation (during runtime)

        //ex. A ferrari is a: ferrari, and a car, and a vehicle, and an object


        Scanner sc = new Scanner(System.in);
        Animal animal;

        System.out.println("what animal do you want?");
        System.out.println("(1 = dog) or (2 = cat)");
        int choice = sc.nextInt();

        if(choice == 1)
        {
            animal = new Dog();
            animal.speak();
        }
        else if(choice == 2)
        {
            animal = new Cat();
            animal.speak();
        }
        else
        {
            animal = new Animal();
            System.out.println("that choice was invalid");
            animal.speak();
        }





    }
}

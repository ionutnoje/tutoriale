public class Main
{
    public static void main(String[] args) {

        //overloaded constructors = multiple constructors within a class with the same name,
        //                          but have different parameters
        //                          name + parameters = signature



        Pizza pizza1 = new Pizza("thicc crust","tomato","mozzarella");

        System.out.println("ingredientele de pe pizza ta: ");
        System.out.println(pizza1.bread);
        System.out.println(pizza1.sauce);
        System.out.println(pizza1.cheese);
        System.out.println(pizza1.topping);

    }
}

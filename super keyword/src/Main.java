public class Main
{
    public static void main(String[] args) {

        // super = keyword refers to the superclass (parent) of an object
        //          very similar to the "this" keyword


        Hero hero1 = new Hero("noje",20,"$$$");
        Hero hero2 = new Hero("noje2",21,"@@@");

        System.out.println(hero1.name);
        System.out.println(hero1.age);
        System.out.println(hero1.power);

        System.out.println(hero2.toString());

    }
}

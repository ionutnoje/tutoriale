public class Main
{
    public static void main(String[] args) {


        Human human1 = new Human("noje",20,80);
        System.out.println(human1.name);
        Human human2 = new Human("noje2",21,75);
        System.out.println(human2.name);

        human2.eat();
        human1.drink();

    }
}

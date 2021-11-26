public class Main
{
    public static void main(String[] args) {

        Coada coada = new Coada(10);

        coada.enqueue(10);
        coada.print();
        System.out.println("sunt : " +coada.nr_elemente()+ " elemente in coada");
        System.out.println(coada.isEmpty());
        coada.dequeue();
        System.out.println(coada.isEmpty());
    }
}

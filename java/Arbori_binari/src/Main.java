public class Main
{
    public static void main(String[] args) {

    Arbore arbore = new Arbore();
    arbore.add(1);
    arbore.add(2);
    arbore.add(3);
    arbore.traverseInOrder(arbore.root);
    }
}

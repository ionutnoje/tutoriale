public class Main
{
    public static void main(String[] args) {
        //create a DoublyLinkedList object
        LDI dl_List = new LDI();
        //Add nodes to the list
        dl_List.addNode(10);
        dl_List.addNode(20);
        dl_List.addNode(30);
        dl_List.addNode(40);
        dl_List.addNode(50);

        //print the nodes of DoublyLinkedList
        dl_List.printNodes();
    }
}

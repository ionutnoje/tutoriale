public class Friend
{
    String name;
    static int numberOfFriends;
    public Friend(String name)
    {
        this.name = name;
        numberOfFriends++;
    }


    //daca folosim numberOfFriends in mod static....toate metodele si toti membrii o
    //sa foloseasca aceeasi val a numberOfFriends(care este incrementate odata cu fiecare prieten adaugat...e ca un fel de contor)
    //adica daca o sa cream 3 prieteni in main si afisam numberOfFriends o sa apara 3
    //insa daca il folosim sub forma de int simplu fiecare friend o sa aiba o val diferita
    //pentru numberOfFriends....adica 1...pentru ca se incrementeaza numberOfFriends...care este implicit 0 pentru ca este declarat
    //global


    //metoda statica
    static void displayFriends()
    {
        System.out.println("you have " + numberOfFriends + " friends");
    }

    //cu metoda statica putem sa o apelam in main fara sa mai instantiem un obiect de tipul clasei
    //de ex Math.roud();
    //pentru utilizarea metodei statice se scrie numele clasei urmat de metoda



}

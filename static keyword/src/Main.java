public class Main
{
    public static void main(String[] args) {

        // static = modifier. A single copy of a variable/method is created and shared.
        //           the class "owns" the static member

        Friend friend1 = new Friend("noje");
        Friend freind2 = new Friend("noje1");
        Friend freind3 = new Friend("noje2");

        System.out.println(Friend.numberOfFriends);//folosit sub forma statica o sa apara 3
                                                    //folosit numai ca si int normal o sa apara 1



        Friend.displayFriends();// folosind o metoda statica nu mai este nevoie
        //sa instantiem un obiect de tipul clasei



    }


}

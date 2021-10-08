public class Fish implements Prey,Predator//o clasa poate sa implementeze mai multe interfete deodata
{
    public void flee()
    {
        System.out.println("this fish is fleeing from a larger fish");
    }

    public void hunt()
    {
        System.out.println("this fish is hunting smaller fish");
    }
}

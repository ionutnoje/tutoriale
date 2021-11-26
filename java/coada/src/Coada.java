public class Coada
{

    private int capacity,front,rear;
    private int array[];

    public Coada()
    {

    }

    public Coada(int capacity)
    {
        this.capacity = capacity;
        this.front = 0;
        this.rear = 0;
        this.array = new int[capacity];
    }

    public void enqueue(int nr) {
        if (isFull() != true) {
            array[rear] = nr;
            rear++;
        }
        else
        {
            throw new RuntimeException("Coada este plina");
        }
    }

    public void dequeue()
    {
        if(isEmpty() != true)
        {
            for(int i = 0; i < rear - 1; i++)
            {
                array[i] = array[i + 1];
            }
            rear--;
        }
        else
        {
            throw new RuntimeException("Coada este goala");
        }
    }

    public int peek()
    {

        if(isEmpty() == true)
        {
            throw new RuntimeException("Coada este goala");
        }

            return array[rear];


    }

    public void print()
    {
        if(isEmpty() == true)
        {
            throw new RuntimeException("coada este goala");
        }
        else
        {
            for(int i = 0; i <= rear; i++)
            {
                System.out.println("vector["+i+"]= " +array[i]);
            }
        }
    }

    public boolean isFull()
    {
        if(rear == capacity)
        {
            return true;
        }
        else return false;
    }

    public boolean isEmpty() {
        if (rear == 0)
        {
            return true;
        }
        else return false;
    }

    public int nr_elemente()
    {
        return rear;
    }






}

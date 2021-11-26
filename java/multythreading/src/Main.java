public class Main
{
    public static void main(String[] args) {

        //multithreading =  Process of executing multiple threads simultaneously
        //                  Helps maximum utilization of CPU
        //                  Threads are independent, they don't affect the execution of other threads.
        //                  An exception in one thread will not interrupt other threads
        //                  useful for serving multiple clients, multiplayer games, or other mutually independent tasks


        //construim 2 threaduri fiecare cu cate un program propriu...unui o sa numere de la 10 la 0 si celalalt de la 0 la 10 sau alte numere



        MyThread thread1 = new MyThread(); // threadul din clasa MyRunnable

        MyRunnable runnable1 = new MyRunnable();
        Thread thread2 = new Thread(runnable1);//threadul creat cu ajutorul clasei care implementeaza interfata Runnable


//        thread1.setDaemon(true);
//        thread2.setDaemon(true);

        thread1.start();
        try {
            thread1.join();//practic spunem ca vrem sa rulam thread1 prima data...iar apoi dupa ce thread1 moare o sa inceapa thread2
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        thread2.start();




    }
}

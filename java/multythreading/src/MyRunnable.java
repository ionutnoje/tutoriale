import java.util.Scanner;

public class MyRunnable implements Runnable{
    @Override
    public void run() {
//        for(int i = 0; i < 10; i++)
//        {
//            System.out.println("Thread[2]: " + i);
//            try {
//                Thread.sleep(1000);
//            } catch (InterruptedException e) {
//                e.printStackTrace();
//            }
//        }
///////////////////////////////////////////////////////////////////////////
        Scanner sc = new Scanner(System.in);
        int suma = 0;
        for(int i = 1; i <= 5; i++){
            System.out.println("Introduceti o valoare de la tastatura: ");
            int val = sc.nextInt();
            System.out.println("Valoarea introdusa este: " + val);
            suma = suma + val;
            System.out.println("suma este : " + suma);
        }
        System.out.println("suma este : " + suma);


        System.out.println("Thread[2] is finished");



    }
}

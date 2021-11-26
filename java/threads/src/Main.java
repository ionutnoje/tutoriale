public class Main
{
    public static void main(String[] args) {

        /*
    	thread =	A thread of execution in a program (kind of like a virtual CPU)
    				The JVM allows an application to have multiple threads running concurrently
    				Each thread can execute parts of you code in parallel with the main thread
    				Each thread has a priority.
    				Threads with higher priority are executed in preference compared to threads with a lower priority

    			    The Java Virtual Machine continues to execute threads until either of the following occurs
    					1. The exit method of class Runtime has been called
    					2. All user threads have died

    				When a JVM starts up, there is a thread which calls the main method
    				This thread is called “main”

    				Daemon thread is a low priority thread that runs in background to perform tasks such as garbage collection
				JVM terminates itself when all user threads (non-daemon threads) finish their execution
    	 */



        ///////////////////////////////////////////////////////////////////////

        //System.out.println(Thread.activeCount()); // se verifica cate thread uri ruleaza in acel moment
//        Thread.currentThread().setName("MAIN thread"); // se seteaza numele thread ului
//
//        System.out.println(Thread.currentThread().getName()); // se afiseaza numele thread ului curent


//        System.out.println(Thread.currentThread().getPriority()); // prioritate 5 pe o scara de la 1 la 10...cu cat mai mare nr cu atat este mai important
//
//        Thread.currentThread().setPriority(10); // se seteaza prioritatea unui thread
//
//        System.out.println(Thread.currentThread().getPriority()); //prioritate 10 pentru ca am setat noi astsa


//        System.out.println(Thread.currentThread().isAlive());//verifica daca thread ul este viu


        ///////////////////////////////////////////////////////////////////////


//        for(int i = 3; i > 0; i--)
//        {
//            System.out.println(i);
//            try {
//                Thread.sleep(1000);
//            } catch (InterruptedException e) {
//                e.printStackTrace();
//            }
//        }
//        System.out.println("thread ul este mort");




        ///////////////////////////////////////////////////////////////////////


//        MyThread thread2 = new MyThread();
//        System.out.println(thread2.isAlive());//o sa arate false pentru ca inca nu l am pornit
//
//        thread2.start();
//        System.out.println(thread2.isAlive());
//        thread2.setName("thread ul 2");
//        System.out.println(thread2.getName());
//        System.out.println(thread2.getPriority());//daca avem un thread care creaza un alt thread o sa mosteneasca prioritatea lui..in cazul acesta main are prioritate 5....deci si thread2 o sa aiba prioritate 5
//        thread2.setPriority(1);
//        System.out.println(thread2.getPriority());


/////////////////////////////////////////////////////////////////////////////////


        MyThread thread2 = new MyThread();
        thread2.setDaemon(true);//thread urile de tip daemon sunt threaduri cu prioritate mica
        System.out.println(thread2.isDaemon());
        thread2.start();















    }
}

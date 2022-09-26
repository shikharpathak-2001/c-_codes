class X implements Runnable
{
    public void run()
    {
        for(int i = 1; i<=10; i++){
            System.out.println("\tthred x : "+i);
        }
        System.out.println("end of thread");
    }
}
public class RunnableTest {
    public static void main(Sring args[])
    {
        X runnable = new X();
        Thread threadX = new Thread(runnable);
        threadX.start();
        System.out.println("End of main Thread");

    }
    
}

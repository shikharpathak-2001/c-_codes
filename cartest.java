import p1.*;
abstract class Car{  
    abstract void run();  
  }  
  
   class honda extends Car{  
  void run(){System.out.println("safety check for Honda: OK!");}  
   }
  class audi extends Car{
    void run(){System.out.println("safety check for Audi : FAIL !");}
  }
  
  
public class cartest{  public static void main(String args[]){  
   Car obj = new honda();

   Car obj1 = new audi(); 
   obj.run();  
   obj1.run();
   calculator cal1 = new calculator();
   test t1 = new test();
   
   new Thread(){
     public void run(){cal1.calculation();}}.start();
     new Thread(){
       public void run(){t1.area();}
       }.start();
    }  
  }  
  
  
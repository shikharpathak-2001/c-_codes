


import java.util.*;
class quadratic {
    Scanner sc = new Scanner(System.in);
    double a,b,c,d,e,f;
    public void getdata(){
    System.out.println("enter the quadratic equation ");a = sc.nextInt();
    System.out.print("x² + ");b = sc.nextInt();
    System.out.print("x + "); c = sc.nextInt();  
    System.out.println("so your quadratic equation is:");
System.out.println(""+a+"x² + "+b+"x + "+c);}
}
class roots extends quadratic  {
     void root(){
        d = b*b - 4*a*c;
        if(d>0){
            e = (-b - Math.sqrt(d))/(2*a);
            f = (-b + Math.sqrt(d))/(2*a);

            System.out.println("first root is :"+e);
            System.out.println("second root is :"+f);
            String e = null;
            String f = null;

        }
        else if(d==0) {
            e=f= -b/(2*a);
            System.out.println("the roots of equation are :"+e+f);
        }
        else {
  
            // roots are complex number and distinct
            System.out.println("the numbers are a complex number thus there exist no roots");
            
        
    }
    }
     void display(){
        System.out.println("the roots of the equation are :"+e+f);
    }
}
 class findingroots {
    public static void main(String[] args){
        roots  q = new roots();
        // Thread t = new Thread(q);
        
        // q.g();
        q.getdata();
        new Thread(){
            public void run(){q.root();}}.start();
        new Thread(){
            public void run(){q.display();}}.start();
        
    }

    
}

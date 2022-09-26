import java.util.*;
class calculator{
    Scanner sc = new Scanner(System.in);
    int i;
    int num1;
    int num2;
    char c;
    public void calculation(){
    do{
    System.out.println("enter the opeartion you wish to do ");
    System.out.println("1.addition");
    System.out.println("2.subtraction");
    System.out.println("3.multiplication");
    System.out.println("4.division");
    i = sc.nextInt();
    switch(i){
    case 1:
    
        System.out.println("enter the numbers:");
        num1=sc.nextInt();
        num2=sc.nextInt();
        System.out.println("the sum is: "+(num1+num2));
        break;
    
    case 2:
    
        System.out.println("enter the numbers:");
        num1=sc.nextInt();
        num2=sc.nextInt();
        System.out.println("the subtraction is: "+(num1-num2));
        break;
    
    case 3:
    
        System.out.println("enter the numbers:");
        num1=sc.nextInt();
        num2=sc.nextInt();
        System.out.println("the subtraction is: "+(num1*num2));
        break;
    
    case 4:
    
        System.out.println("enter the numbers:");
        num1=sc.nextInt();
        num2=sc.nextInt();
        
        try {
            int divideByZe = num1/num2;
            System.out.println("Rest of code in try block");
            System.out.println("the division is: "+divideByZe);
          }
      
          catch (ArithmeticException e) {
            System.out.println("ArithmeticException => " + e);
          }
       
        break;
    
    default:
    System.out.println("you entered the wrong choice");}
    System.out.println("do yo wish to continue ?y/n");
     c = sc.next().charAt(0);
    }while(c == 'y');
    
}
}
interface constants{
    double radius = 30;
    double pie = 3.14;
    double height = 23;
    double base = 35;
    double length = 33;
    double breadth = 89;
}
class test extends calculator implements constants{
    public void area(){
        System.out.println("this is the area of rectangle with length:"+length+"and breadth:"+breadth+":\t"+(length*breadth));
        System.out.println("this is the area of circle with radius:"+radius+":\t"+(pie*radius*radius));
        System.out.println("this is the area of triangle with base:"+base+"and heignt"+height+":\t"+(.5*base*height));
    }

}

public class testing {
    public static void main(String[] args) { 
    test cal1 = new test();
    cal1.calculation();
    cal1.area();
    }
    
}

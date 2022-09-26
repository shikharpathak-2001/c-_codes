import java.util.*;
interface Data2{
    String name = "shikhar";
    void getsportsdata();
    void show();
    int age = 18;
    int year =2001;
    
}
class Data implements Data2{
    public
    Scanner sc=new Scanner(System.in);
    int rollnumber = 21;
    int marks;
    
    
    public void getmarks(){
        
            System.out.println("enter the marks of student ");
                marks = sc.nextInt();
        }
        int distance;
   
    public void getsportsdata(){
        
        System.out.println("enter the distance ran in marathon :");
        distance= sc.nextInt();
        

    }
    public void show(){
        System.out.println("the name of student is:"+name);
        System.out.println("the age of student is"+age);
        System.out.println("the roll number of student is:"+rollnumber);
        System.out.println("the marks of student are : "+marks);
        System.out.println("the distance ran by student are:"+distance);
    }
}

class Student extends Data
{  
    public
    String school;
    void getschool(){
        System.out.println("enter the name of school");
        school = sc.nextLine();
        
  }
    void showyear(){
    System.out.println("the name of school is :"+school);
    System.out.println("the year of academic year is:"+year);
}

    
    
    



public static void main(String args[]){
Student s1=new Student();

s1.getschool();
s1.getmarks();
s1.getsportsdata();
s1.show();
s1.showyear();
}
}

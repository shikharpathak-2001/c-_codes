
import java.util.*;

class studentdata2{
    Scanner sc=new Scanner(System.in);
    String name = "shikhar";
    int rollnumber = 21;
    int age = 18;
    int marks1,marks2,marks3;
    
    
    public void getdata(){
        
            System.out.println("enter the marks of student in subjects ");
            System.out.println("subject1:");
            marks1 = sc.nextInt();
            System.out.println("subject2:");
            marks2 = sc.nextInt();
            System.out.println("subject3:");
            marks3 = sc.nextInt();
        }
    
    public void show(){
        System.out.println("the name of student is:"+name);
        System.out.println("the age of student is"+age);
        System.out.println("the roll number of student is:"+rollnumber);
        System.out.println("the marks of student are : \nsubject1:"+marks1+"\nsubject2:"+marks2+"\nSubject3"+marks3);
        
    }
    public void setdata(){
        if((marks1+marks2+marks3)<150){
            System.out.println("the student has failed the year");}
        else{
            System.out.println("the student has passed the year");
        }
    }


public static void main(String args[]){
studentdata2 s1 = new studentdata2();
s1.getdata();
s1.show();
s1.setdata();

}}

    

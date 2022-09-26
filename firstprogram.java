public class firstprogram
{
int id=1;//field or data member or instance variable
String name="shikhar";
int marks= 90;
// status = "PASSED";

public static void main(String args[]){
firstprogram s1=new firstprogram();
//creating an object of Student
System.out.println("rollnumber of student:\t"+s1.id);//accessing member through reference variable
System.out.println("name of student :\t" +s1.name);
System.out.println("marks of the student:\t" +s1.marks+"%");
if(s1.marks >= 50){
System.out.println("The student passed the exam");
}
else{System.out.println("The student didnt pass the exam");
}
}
}

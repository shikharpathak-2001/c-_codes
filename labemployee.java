import java.util.*;
class employee{
    Scanner sc=new Scanner(System.in);
    public
    int employeeid;
    String name;
    int salary;
    int hours;
}
class programmer extends employee {
    
    public void getdata(){
        
        System.out.println("Enter the name of programmer:");
        name = sc.nextLine();
        System.out.println("enter id of programmer:");
        employeeid = sc.nextInt();
        System.out.println("enter the salary of programmer:");
        salary = sc.nextInt();
        System.out.println("enter the workin hours of student:");
        hours = sc.nextInt();
    }
    
   
    public void display(){
    System.out.println("name of programmer is: "+name);
    System.out.println("the id of employee is:"+employeeid);
    System.out.println("the salary of programmer is : "+salary);
    System.out.println("the working hours of programmer is:"+hours);
    }    
}
class  analyst extends employee {

    public void getdata(){
        System.out.println("Enter the name of Analyst:");
        name = sc.nextLine();
        System.out.println("enter id of Analyst:");
        employeeid = sc.nextInt();
        System.out.println("enter the salary of Analyst:");
        salary = sc.nextInt();
        System.out.println("enter the workin hours of Analyst:");
        hours = sc.nextInt();}
    
   
    public void display(){
    System.out.println("name of Analyst is: "+name);
    System.out.println("the id of Analyst is:"+employeeid);
    System.out.println("the salary of Analyst is : "+salary);
    System.out.println("the working hours of Analyst is:"+hours);
    }    
    }
    class projectleader extends employee {
        public void getdata(){
            System.out.println("Enter the name of project leader :");
            name = sc.nextLine();
            System.out.println("enter id of project leader:");
            employeeid = sc.nextInt();
            System.out.println("enter the salary of project leader:");
            salary = sc.nextInt();
            System.out.println("enter the workin hours of project leader:");
            hours = sc.nextInt();}
        
       
        public void display(){
        System.out.println("name of project leader is: "+name);
        System.out.println("the id of project leader is:"+employeeid);
        System.out.println("the salary of project leader is : "+salary);
        System.out.println("the working hours of project leader is:"+hours);
        }    
        

    


public static void main(String args[]){
//employee s1=new employee();
programmer s2 = new programmer();
analyst s3 = new analyst();
projectleader s4 = new projectleader();

s2.getdata();
s2.display();
s3.getdata();
s3.display();
s4.getdata();
s4.display();
}
}

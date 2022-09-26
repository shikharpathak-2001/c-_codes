import java.util.*;
class Bank { 
    private String name ,acctype;
    private int accno,balance2;
    private int balance; 
    Scanner sc = new Scanner(System.in);
    Scanner input = new Scanner(System.in);
    public void setData() 
    { 
        System.out.println("Enter Account name: ");
        name=sc.nextLine();
        System.out.println("Enter account number: ");
        accno=sc.nextInt();
        System.out.println("Enter your account type: ");
        acctype=input.nextLine(); 
        System.out.println("Enter  your current balance: ");
        balance = sc.nextInt(); 
        amount_withdrawal(); 
        amount_deposit(); 
    } 
    private void amount_deposit()
    {
        int amount ;
        System.out.println("Enter your deposit amount: ");
        amount =sc.nextInt (); 
        balance=balance+amount ;
    } 
    private void amount_withdrawal()
    { 
        int amount1; 
        System.out.println("enter your winthdarwal amount: ");
        amount1=sc.nextInt();
        if(amount1>500)
        { 
            balance2 = balance - amount1; 
        } 
        else
        
        {
            System.out.println("you cannot withdraw this amout because of it is less than 500");
            balance2 = balance;
            
        }
    }
    public void display() 
    {
        System.out.println("Bank acccount name : "+name);
        System.out.println("Account number : "+accno);
        System.out.println("Account type : "+acctype);
        System.out.println("after deposit amount : "+balance);
        System.out.println("after withdrawl amount : "+balance2);
    }
    }
    public class bank1 { 
        public static void main(String[] args){
            Bank obj = new Bank();
            obj.setData();
            obj.display();
        }
    }
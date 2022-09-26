import java.util.*;
class numberconparing
{
	private static Scanner sc;

    public static void main(String[] args) {
	    sc = new Scanner(System.in);
	    int n1,n2,n3;
		System.out.println("now enter the three numbers");
		System.out.println("enter first number:");
		n1 = sc.nextInt();
        System.out.println("enter second number:");
        n2 = sc.nextInt();
        System.out.println("enter third number");
        n3 = sc.nextInt();
        if(n1>n2&&n1>n3){
            System.out.println(n1+"is largest ");
        }
        else if(n2>n1&&n2>n3){
            System.out.println(n2+"is the largest ");
        }
        else{
            System.out.println(n3+"number is larges");
        }

		
		
	}
}

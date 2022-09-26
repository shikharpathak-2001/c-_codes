import java.util.*;
class Calculatorprogram
{
    public static void main(String args[])
    {
	int num1,num2;
        double output=0;
	char operator;
        try (Scanner sc = new Scanner(System.in)) {
			System.out.println("Enter an expression ");
			num1=sc.nextInt();
			 	operator=sc.next().charAt(0);
			  num2=sc.nextInt();
		}
	switch(operator)
	{
		case '+':
			output=num1+num2;
			System.out.println("answer is:"+output);
			break;
		case '-':
			output=num1-num2;
			System.out.println("answer is:"+output);
			break;
		case '*':
			output=num1*num2;
			System.out.println("answer is:"+output);
			break;
		case '/':
			output=num1/num2;
			System.out.println("answer is:"+output);
			break;
		case '%':
			output=num1%num2;
			System.out.println("answer is:"+output);
			break;
		default :
			System.out.println("this operation is not valid !");
			break;
	}
	
   }
}
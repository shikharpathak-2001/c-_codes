import java.util.Scanner;
public class curvefitting {
    public static void main(String[] args){
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the number of values in x and y");
    n= sc.nextInt();
    double arr[] = new double[n];
    double arr2[] = new double[n];
    System.out.println("enter the x values ");
    for(int i=0;i<n;i++){
        System.out.println((i+1)+"value in x:");
        arr[i]=sc.nextDouble();
        System.out.println((i+1)+"value in y:");
        arr2[i]=sc.nextDouble();        
    }
    System.out.println("now the tables are : ");
    for(int i=0;i<n;i++){
        System.out.println(arr[i]+"     "+arr2[i]+":");
    }
    double sum1=0,sum2=0,sum3=0,sum4=0,sum5,sum6,sum7,sum8=0;
    int choice;
    System.out.println("do you wish to fit the curve in paravola or straight line ?");
    choice = sc.nextInt();
    for(int i=0;i<n;i++){
        sum3 = (arr[i]*arr[i])+sum3;
        // sum4 = (arr2[i]*arr2[i]+sum5);
        sum4 = (arr[i]*arr2[i])+sum4;
        sum1 = (arr[i]+sum1);
        sum2 = (arr2[i]+sum2);
    }
    System.out.println("the values required are:");
    System.out.println("sum of x:"+sum1);
    System.out.println("sum of y:"+sum2);
    System.out.println("sum of xsquare:"+sum3);
    System.out.println("sum of xy: "+sum4);
    // System.out.println(sum5);
    }
}

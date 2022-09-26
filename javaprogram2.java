import java.util.*;
public class javaprogram2 { 

    public static void main(String[] args) { 
        try (Scanner sc = new Scanner(System.in)) {
            int[] arr= new int[5];
            
             System.out.println("enter the elements of the array");
            for(int i=0;i<5;i++) 
            {
                arr[i]=sc.nextInt();
            } 
            

//    System.out.println("Array elements are: ");  


        System.out.println("now we will find the sum of array elements");
        int sum = 0;
        for(int i=0;i<5;i++) 
        {
            sum = sum + arr[i];
        } 
        System.out.println("the sum of elements is "+sum);
        System.out.println("the average of array elements is "+(sum/5));
    }
         }}
        

 
    
   
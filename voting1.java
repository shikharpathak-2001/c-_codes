import java.io.PrintStream;
import java.util.*;
public class voting1{
    /**
     *
     */
    private static final PrintStream OUT = System.out;

    public static void main(String[] args) { 
    try (Scanner sc = new Scanner(System.in)) {
        int[]arr=new int[6];
        char rep;
        do{
        OUT.println("enter the candidate you want to vote for");
        OUT.println("1.sarwapalli\n2.ramkrishna\n3.abdul\n4.yuvraj\n5.kumar");
        int c = sc.nextInt();
        switch(c)
        {
            case 1:
            arr[0]++;
            break;
            case 2:
            arr[1]++;
            break;
            case 3:
            arr[2]++;
            break;
            case 4:
            arr[3]++;
            break;
            case 5:
            arr[4]++;
            break;
            default:
            arr[5]++;
        }
        OUT.println("do you want to continue ? y or n");
 rep = sc.next().charAt(0);
}while (rep == 'y');
OUT.println("the total vote count is:");
OUT.println("1.sarwapalli:"+arr[0]);
OUT.println("2.ramkrishna:"+arr[1]);
OUT.println("3.abdul:"+arr[2]);
OUT.println("4.yuvraj:"+arr[3]);
OUT.println("5.kumar:"+arr[4]);
OUT.println("junk votes:"+arr[5]);
    }

}
}
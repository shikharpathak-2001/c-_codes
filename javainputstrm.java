
import java.io.*;  
public class javainputstrm{
public static void main(String args[])throws Exception{             
InputStreamReader r = new InputStreamReader(System.in);    
BufferedReader br = new BufferedReader(r);            
System.out.println("Enter your name");    
    String name=br.readLine();    
System.out.println("Hello "+name+"!");    
}    
}

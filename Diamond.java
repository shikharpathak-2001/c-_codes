 public class Diamond
{
	public static void main(String[] args) {
	    for(int i = 0;i<=5;i++){
	       // System.out.println();
	        for(int j=5;j>i;j--){
	            System.out.print(" ");
	        }
	        for (int a=1;a<=2*i-1;a++){
	        System.out.print(""+a);}
	        System.out.print("\n");
	    }
	    
	    

	
    for(int m = 0 ;m<6;m++){
       
	        for(int j = 1;j<=m+1;j++){
	            System.out.print(" ");
	            
	        }
	        for(int s=5 ;s>=(2*m-1);s--){
	            System.out.print(""+s);
	        }
	        System.out.print("\n");
    }
	}
}
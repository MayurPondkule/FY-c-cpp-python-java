import java.util.*;


public class OOPL {

	
	 static int x=0;
	 static int y=0;
   int r=0;
	public int getAddition(int p, int q)
	{
		System.out.println("We are in getAddition method");
 	r=p+q;
		
	return r;	
	}
	 
	 
	 
	public static void main(String[] args) {
		
		
		
		
		// TODO Auto-generated method stub
		 
		Scanner s=new Scanner(System.in);
	System.out.println("Enter X:");

		x=s.nextInt();
     System.out.println("Enter Y:");

	y=s.nextInt();
		
		 
		
		OOPL o=new OOPL();
		
int rr=o.getAddition(x,y);
		System.out.println("Hello"+rr);

	}

}
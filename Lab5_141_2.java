package s1;
/*Year 1
 * Java program that uses a while-loop to check all numbers between 0 and 999 
 * inclusive to see if they are a multiple of 4.
 */
public class Lab5_141_2 

{
	public static void main(String args[])
	{
		int x=0;//start at 1
		while(x<=999)//while x is less than or equal to 999
		{
			if(x%4==0)
			{
				System.out.println(x+"is a multiple of 4");
				
				
				
			}
			x++;
			
		}
	}

}

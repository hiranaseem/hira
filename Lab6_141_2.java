package s1;
/*Year 1
 * Program that uses a for-loop to print all the even numbers between 100 and 1000 
 * (one per line) to the screen in descending order – 
 * you must use an if statement.
 * 
 */
public class Lab6_141_2 

{
	public static void main(String args[])
	{
		for(int i =1000; i>=100; i--)
		{
			if(i%2==0)
			{
				System.out.println(i);
			}
		}
	}

}

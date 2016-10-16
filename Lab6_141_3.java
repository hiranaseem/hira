package s1;
/*
 *Year 1
 *Java program that uses a for-loop to compute:
- The sum of all even numbers between 2 and 100 (inclusive)
- The sum of all squares between 1 and 100 (inclusive)
 * 
 */
public class Lab6_141_3 

{
	public static void main(String args[])
	{
		int square=0;
		int squareSum=0;
		int sum=0;
		for(int i =1; i<=100; i++)
		{
			if(i%2==0)
			{
				sum=i+sum;
				
			}
			
			square=i*i;
			squareSum=square+squareSum;
			
			
		}
		System.out.println("Sum is: "+sum);
		System.out.println("Product is: "+squareSum);
		
	}

}

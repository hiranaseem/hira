package s1;
/*
 * Java program that determines and prints 
 * the digits that make up every three-digit number.
 * 
 */

public class Lab6_141_4 

{
	public static void main(String args[])
	{
		
		for(int i=100; i<=999; i++)
		{
			
			System.out.println("The first digit in the number "+i+" is "+(i/100));
			System.out.println("The second digit of "+i+" is "+((i/100)%10));
			System.out.println("The third digit of "+i+" is "+i%10);
			System.out.println("************************************************");
			
		}
		
	}
	

}

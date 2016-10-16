package s1;
import java.util.*;
/*
 * Simple program to determine if a number is odd
 * or even
 */
public class Lab3_141_6 

{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Please enter a number: ");
		int num=sc.nextInt();
		
		if(num%2==0)
		{
			System.out.println(num+ " is even");
		}
		else
		{
			System.out.println(num+ " is odd");
		}
	}
}

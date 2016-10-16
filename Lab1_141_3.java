package s1;

/*Year 1
 * Simple Program to print stars
 */

public class Lab1_141_3 

{
	public static void main(String args [])
	{
		int i, j, k;
		for(i=5;i>=1;i--)
		{
		for(j=5;j>i;j--)
		{
		System.out.print(" ");
		}
		for(k=1;k<=i;k++)
		{
		System.out.print("*");
		}
		System.out.println();
		}
	}
}
	



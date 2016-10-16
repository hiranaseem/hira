package s1;

public class Star 

{
	public static void main(String args[])
	{
		/*
		 * 	*****
		 *  ****
		 *  ***
		 *  **
		 *  *
		 
		
		for(int i=5; i>=1; i--)
		{
			for(int j=1; j<=i; j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
		*/
		
		/*	*****
		 *   ****
		 *    ***
		 *     **
		 *      *
		 * 
		
		
		for(int i=5; i>=1; i--)//rows
		{
			for(int j=5; j>i; j--)//spaces, less than rows so 4
			{
				System.out.print(" ");
			}
			for(int k=1; k<=i; k++)//stars, same as rows
			{
				System.out.print("*");
			}
			System.out.println();
			
		}
		 */
		
		/*
		 *  *
		 *  **
		 *  ***
		 *  ****
		 *  *****
		 
		
		for(int i=1; i<=5; i++)
		{
			for(int j=1; j<i; j++)//stars, same as rows
			{
				System.out.print("*");
			}
			System.out.println();
		}
		*/
		
		/*		*
		 *     * *
		 *    * * *
		 *   * * * *
		 *  
		 */
		
		for(int i=1; i<=5; i++)
		{
			for(int j=4; j>=i; j--)
			{
				System.out.print(" ");
			}
			for(int k=1; k<=(2*i-1); k++)
			{
			System.out.print("*");
			}
			System.out.println("");
			}
		}
		
	}



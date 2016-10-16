package s1;
/*
 * Lab to check what operator is being used and 
 * ro perform that operation
 */
public class Lab4_141_2 

{
	public static void main(String args[])
	{
		double x=2.5;
		double y=2.6;
		char z= '-';
		
		if(z=='*')
		{
			System.out.println(x*y);
		}
		else if(z=='/')
		{
			System.out.println(x/y);
		}
		else if(z=='+')
		{
			System.out.println(x+y);
		}
		else if(z=='-')
		{
			System.out.println(x-y);
		}
		else
		{
			System.out.println(x%y);
		}
	}

}

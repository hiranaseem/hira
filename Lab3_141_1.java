package s1;
/*Year 1
 * Program to print the digits of a 4 digit number
 */

public class Lab3_141_1 

{
	public static void main(String args[])
	{
		int num = 2787;
		int a = (2787/1000);//2
		int b = (2787/100)%10;//
		int c = (2787/10)%10;//8
		int d = 2787%10;//7, modulus 10 gives the last number
		
		
		System.out.println("The digits of the four numbers are:\n"+a+"\n"+b+"\n"+c+"\n"+d);
	}

}

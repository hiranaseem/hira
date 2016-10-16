package s1;
/*
 * check if a number is a 3 or 4 digit number
 */

public class Lab4_141_4 
{
	public static void main(String args[])
	{
	int a =5969;
	
	if(a<1000)
	{
		System.out.println("This is a three digit number\n"+(a/100)+"\n"+(a%100)/10+"\n"+(a%10));
		
	}
	else
	{
		System.out.println("This is a four digit number\n"+(a/1000)+"\n"+(a%1000)/100+"\n"+(a%100)/10+"\n"+(a%10));
	}
	
}
}

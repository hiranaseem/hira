package s1;

/*Year 1
 * Sample questions using modulus, print answers
 */
public class Lab2_141_5 

{
	public static void main(String args[])
	{
		int a=12;
		int b=10;
		double c=12.0;
		double d=10.0;
		
		int result1=a%b;
		double result2=c%d;
		int result3=b%a;
		double result4=d%c;
		double result5=c%b;
		
		System.out.println(result1+"\n"+result2+"\n"+result3+"\n"+result4+"\n"+result5);
	}

}

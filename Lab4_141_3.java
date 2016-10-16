package s1;
/*Year 1
 * program checks to see if all, or at least one age is over 18
 */

public class Lab4_141_3 
{
	public static void main(String args[])
	{
		int person1=21;
		int person2=19;
		int person3=35;
		
		if((person1>18)&&(person2>18)&&(person3>18))
		{
			System.out.println("All people are greater than 18");
	
		}
		else if((person1>18)|(person2>18)|(person3>18))

		{
			System.out.println("At least one person is greater than 18");
			
		}
	}

}

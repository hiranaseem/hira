package s1;

public class Lab5_141_4

{
	public static void main(String args[])
	
	{

		
			int num = 45475867;
			while (num != 0)
				{

					int reminder = num % 10;//gives us final digit
					num = num / 10;//reduces number by 10
	        		System.out.println(reminder);//prints last digit
	        	}
		
	}

}

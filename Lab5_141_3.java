package s1;

public class Lab5_141_3 

{
	public static void main(String args[])
	
	{
		int x=0;
		int answer=0;//will store the final answer
		while(x<=50)//while x is less than 50
		{
			if(x%2==1)//if x is odd
			{
				answer =answer+x;//update answer
			}
			x++;//go to the next answer
			
			
		}System.out.println(answer);//print answer
	}

}

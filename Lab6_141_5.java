package s1;

public class Lab6_141_5 

{
	public static void main(String args[])
	{	
		int a=0,b=0,c=0,d=0;
		for( int x = 1000; x <= 9999; x++)
 		{
			a=(x/1000);//first num
			b=(x/100)%10;//second num
			c=(x/10)%10;//third num
			d=(x%10);//last num
 			
 		}
	}

}

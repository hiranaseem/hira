package s1;
/*
 * Simple program to compute and display the number of seconds in a year.
 */

public class Lab2_141_6 

{
	public static void main (String args[])
	{
		//There are 60 seconds in a minute
		int second= 60;
		//There are 60 minutes in an hour, so multiply 60 secs by 60 mins
		int hour= 60*60;	
		//There are 24 hours in a day
		int day=hour*24;
		//There are 365 days in a year
		int year= day*365;
		
		
		System.out.print("Seconds in a year are: "+year);
		
		
	}

}

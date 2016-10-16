package s1;
/*
 * Switch statement to print price a vehicle should pay
 * at the toll
 */
public class Lab4_141_1 

{
	public static void main(String args[])
	{
		char vehicle='c';
		
		
		switch(vehicle)
		{
		case 'a': System.out.println("Car-€2.00"); break;
		case 'b': System.out.println("Motorbike-€1.10"); break;
		case 'c': System.out.println("Bus-€4.25"); break;
		case 'd': System.out.println("Truck-€6.70"); break;
		case 'e': System.out.println("Van-€4.00"); break;
		default: System.out.println("not applicable"); break;
		}
	}

}

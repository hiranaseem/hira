/*
	Date: 12/10/16
	Program to check if a number is odd or even.
*/
#include<iostream>

using namespace std;

bool odd(int x)//initialise function odd,  return type bool, takes in an int x
{	
	//bool can have value true and false.
	return (x%2==1);//true if odd	
	


}

void print_oddness(int x)//function will print if number is odd/even
{ 
	count << x << "is" << (odd(x)?"odd":"even")<<endl;
	
}



int main()//main method

{
	int x;//initialise variable x which will store number to be checked
	cout << "Please enter a number: ";
	cin >> x;//input c
	

	print_oddness(x);
	print_oddness(x+1);	
				
		
	

}

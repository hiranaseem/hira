
/* 
Write a function that determines if a number is prime.  Use this
function in a program that determines and prints all the prime numbers between 1 and
5000
*/ 
#include<iostream>

using namespace std;

int main()

{
	
	for(int i =2; i<=5000;i++)

	{
		if(i%2!=0)
		{
	
		cout <<i<< "is a prime number"<<endl;
	
		}
		else
		{

		cout <<i<< "is not a prime number"<<endl;

		}
	}
	return 0;

}

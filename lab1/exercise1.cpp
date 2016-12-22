/*
	A program to input three integers from keyboard and print sum, 		average, product, smallest and largest of numbers.

*/
#include<iostream>

using namespace std;

int main()
{

	int a, b, c;//three ints
	int sum, avg, prod, small, larg;// variables to print
	
	cin >>a >>b >>c;
	
	sum = a+b+c;
	cout << "Sum: "<< sum<< endl;
	avg= sum/3;
	cout << "Average: "<< avg<< endl;

	if((a<b)&&(a<c))
	{
		small=a;
		cout << "Smallest: "<< a<< endl;
	}
	else if((b<a)&&(b<c))
	{

		small=b;
		cout << "Smallest: "<< b<< endl;
	}
	else
	{
		small=c;
		cout << "Smallest: "<< c<< endl;
	}

	//LARGEST
	if((a>b)&&(a>c))
	{
		larg=a;
		cout << "Largest: "<< a<< endl;
	}
	else if((b>a)&&(b>c))
	{

		larg=b;
		cout << "Largest: "<< b<< endl;
	}
	else
	{
		larg=c;
		cout << "Largest: "<< c<< endl;
	}
return 0;
}

/*
	Write a program that reads in two integers and determines and 		prints if the first is a multiple of the second. 
*/



#include<iostream>

using namespace std;

int main()
{

	int a, b;
	cin >>a >>b;

	//first check if the second int is smaller than the first
	if((a%b)==0)
	{
		cout<<a<<" is a multiple of "<<b<<endl;
	}
	else
	{
		cout<<a<<" is NOT a multiple of "<<b<<endl;
	}



return 0;	

}

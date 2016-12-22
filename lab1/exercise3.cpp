/*
	Write a program that inputs a five-digit number, separates int its individual digits and print. Code should make sure a five-digit number is entered.
*/

#include<iostream>
#include <stdlib.h> 

using namespace std;

int main()

{

int no_of_digits; //length of the input string
int a, b, c, d, e;
string number_string;//the digits will be entered as a string first

cout << "Please enter a five digit number "<<endl;
cin >>number_string;

no_of_digits = number_string.length();

if(no_of_digits == 5)

{
	int number_int =atoi(number_string.c_str());
	a= ((number_int)/10000);
	cout<< a<<endl;
	b= ((number_int)/1000)%10;
	cout<< b<<endl;
	c= ((number_int)/100)%10;
	cout<< c<<endl;
	d=((number_int)/10)%10;
	cout<< d<<endl;
	e= (number_int)%10;
	cout<< e<<endl;


}
else
{
	cout<< "You did not enter a five-digit number. Please try again!"<<endl;
}




return 0;
}

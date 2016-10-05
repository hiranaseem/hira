#include <iostream>
using namespace std;
int main()

{
	int a,b, c;
	cin >>a >>b >>c;
	int sum, avg, prod, smallest, largest;

	sum=a+b+c;
	avg=sum/3;
	prod=a*b*c;
	
	if((a>b)&&(a>c))
	{
	largest=a;
	}
	else if ((b>a)&&(b>c))
	{
	largest=b;
	}
	else
	{
	largest=c;
	}

	if((a<b)&&(a<c))
	{
	smallest=a;
	}
	else if ((b<a)&&(b<c))
	{
	smallest=b;
	}
	else
	{
	smallest=c;
	}

	

	cout <<"Sum is: "<<sum<<endl<< "Avg is: "<<avg<<endl<< "Product is: " <<prod<<endl<< "Smallest is: " <<smallest<<endl<< "Largest is: " <<largest<<endl;

return 0;
	


}

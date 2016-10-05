#include <iostream>
using namespace std;
int main()

{
	
	int x,a,b,c,d,e;
	cin >>x; //enter a digit word
	
	 a=x/10000;
	 b=(x/1000)%10;
	 c=(x/100)%10;
	 d=(x/10)%10;
	 e=x%10;

	cout <<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
	

return 0;
	


}

#include<iostream>

using namespace std;

int safe_divide(int x, int y, bool verbose)//if verbose is true, error statement will be printed, if false, no error statement is printed

{
	if(y==0)
	{
		if(verbose)cerr <<"divides by zero"<<endl;
		return 0;
	}
	return(x/y);
}


main()

{
	int x,y,z;
	cin >> x >> y;
	z=safe_divide(x,y,true);//either 0 or (x/y) is stored in this
	cout <<"Result: "<<z<<endl;



}

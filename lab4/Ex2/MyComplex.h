using namespace std;
class MyComplex{
		
	public:
		MyComplex(); //default constructor that initialises both a and b to 0
		MyComplex(double real,double imag);
		double getReal();//getter method
		void setReal(double a);
		double getImag();//setter method
		void setImag(double b);

		MyComplex Add(const MyComplex &z);
		MyComplex Subtract(const MyComplex &z);
		MyComplex Multiply(const MyComplex &z);

		void print();
	
	protected:
	double realPart;
	double imagPart;
	
};

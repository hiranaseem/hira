using namespace std;
class MyComplex{
		
	public:
		MyComplex(); //Default ctor
		MyComplex(double real,double imag);
		double getReal();
		void setReal(double a);
		double getImag();
		void setImag(double b);

		MyComplex operator+(const MyComplex &z);
		MyComplex operator-(const MyComplex &z);
		MyComplex operator*(const MyComplex &z);

		void print();
	
	protected:
	double realPart;
	double imagPart;
	
};

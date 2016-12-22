#include <iostream> 
#include "MyComplex.h"
using namespace std;

MyComplex::MyComplex(){//initialise both to 0

 realPart=0;
 imagPart=0;
}

MyComplex::MyComplex(double real,double imag){
	 realPart=real;//set the initialised value to value given by parameter
 	 imagPart=imag;//set the initialised value to value given by parameter
}

double MyComplex::getReal(){//getter method 

	return realPart;//return real number

}

void MyComplex::setReal(double a){//setter method

	realPart=a;//set real value to 'a' 
}

double MyComplex::getImag(){//getter method for imaginary value

	return imagPart;//return value

}
void MyComplex::setImag(double b){//setter method
	
	imagPart=b;//set imaginary value to 'b'

}
MyComplex MyComplex::Add(const MyComplex &z){//prototype to add two real bumbers
MyComplex newComplex;
newComplex.setReal(realPart+z.realPart);
newComplex.setImag(imagPart+z.imagPart);
return newComplex;

}
MyComplex MyComplex::Subtract(const MyComplex &z){
MyComplex newComplex;
newComplex.setReal(realPart-z.realPart);
newComplex.setImag(imagPart-z.imagPart);
return newComplex;

}
  
MyComplex MyComplex::Multiply(const MyComplex &z){
MyComplex newComplex;
newComplex.setReal(realPart*z.realPart -imagPart*z.imagPart);
newComplex.setImag(realPart*z.imagPart + imagPart*z.realPart);
return newComplex;

}
void MyComplex::print(){
cout<< this ->realPart << "+" <<this ->imagPart << "i"<<endl;

}

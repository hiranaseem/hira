#include <iostream> 
#include "MyComplex.h"
using namespace std;

MyComplex::MyComplex(){

 realPart=0;
 imagPart=0;
}

MyComplex::MyComplex(double real,double imag){
	 realPart=real;
 	 imagPart=imag;
}

double MyComplex::getReal(){

	return realPart;

}

void MyComplex::setReal(double a){

	realPart=a;
}

double MyComplex::getImag(){

	return imagPart;

}
void MyComplex::setImag(double b){
	
	imagPart=b;

}
MyComplex MyComplex::operator+(const MyComplex &z){
MyComplex newComplex;
newComplex.setReal(realPart+z.realPart);
newComplex.setImag(imagPart+z.imagPart);
return newComplex;

}
MyComplex MyComplex::operator-(const MyComplex &z){
MyComplex newComplex;
newComplex.setReal(realPart-z.realPart);
newComplex.setImag(imagPart-z.imagPart);
return newComplex;

}
  
MyComplex MyComplex::operator*(const MyComplex &z){
MyComplex newComplex;
newComplex.setReal(realPart*z.realPart -imagPart*z.imagPart);
newComplex.setImag(realPart*z.imagPart + imagPart*z.realPart);
return newComplex;

}
void MyComplex::print(){
cout<< this ->realPart << " + " <<this ->imagPart << "i"<<endl;

}

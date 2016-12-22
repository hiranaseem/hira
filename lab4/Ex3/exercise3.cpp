#include<iostream>
#include <cstdlib>
#include <stdlib.h>
#include "MyComplex.h"


using namespace std;

int main(){

  MyComplex one(3,2);
  MyComplex two(1,7);
 
 MyComplex sum=one+two;
cout<< sum.getReal() << " " <<sum.getImag() << "i"<<endl;

 MyComplex sub=one-two;
cout<< sub.getReal() << " " <<sub.getImag() << "i"<<endl;

 MyComplex mult=one*two;
mult.print();


  return 0;
}

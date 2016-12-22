//

#include <iostream>
#include <ctime>
#include <cstdlib>
 
#include "die.h"
using namespace std;

die::die(){

sides_= 6;
}

die::die(int Sides){
	if(Sides>=4){
	sides_=Sides;
	}
	else{
	sides_=6;
	cout<<"Not enough sides , set to default 6"<<endl;
	}
}
int die::roll(){
	int d1=rand() % sides_ + 1;
	value_ = d1;
	return value_;

}

int die::getValue(){
	return value_;

}

int die::getNumsides(){
		return sides_;

}

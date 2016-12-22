#include<iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "die.h"
   /* time */

using namespace std;

int main(){


  int sides=6; //assuming my dice are of sides 6, can be set to greater than 4
  int rolls = 100;
  //if i want user input  ->
  //cout << "how many rolls would you like"<<endl;
  //cin >> rolls;

//depending on the # of sides, if sides is set to 6 then we can get 12 in total.
//there can be 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
  int amount[2*sides-1];

//we need a result array to store all the results from all the rolls   
    int result[rolls];

 //sizeof(amount)/sizeof(*amount) is used to give the number of elements in an array
 //initialising the number to 0 at each position because we havent rolled anything yet
    for(int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++){
        amount[i] = 0; 
    }
//create two die
die one(sides);
die two(sides);

  for(int i=0;i<rolls;i++){
   result[i] = one.roll() + two.roll();

   }
 for(int i = 0; i < rolls; i++){
        amount[result[i]-2]++; 
    }
 for(int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++){
        cout << i+2 << "    " << amount[i] << " " << (double)(amount[i])/(double)(rolls)*100 << "%" << endl; 
    }
  return 0;
}

/* 
 A program that will determine if a department-store 
customer has exceeded the credit limit on a charge account
*/ 
#include<iostream>

using namespace std;

int main()

{
	
	int accNum;
	cout <<"Please enter account number: "<<endl;
	cin >>accNum;
do{
	int begBalance;
	cout <<"Please beginning balance amount: "<<endl;
	cin >>begBalance;
	int totalItems;
	cout <<"Please enter total items charged this month: "<<endl;
	cin >>totalItems;
	int totalCredits;
	cout <<"Please enter total credits: "<<endl;
	cin >>totalCredits;
	int creditLimit;
	cout <<"Please enter creditLimit: "<<endl;
	cin >>creditLimit;
	int newBalance = begBalance+ totalItems- totalCredits;

	if(newBalance>creditLimit)
	{
		cout <<"Account Number: "<<accNum<<endl<<"Credit Limit: "<<creditLimit<<endl<<"New Balance: "<<newBalance<<endl;
		cout <<accNum<< "Credit Limit Exceeded!"<<endl;
	}
	else
	{
		cout << "Credit Limit has not exceeded";
	}
	cout << "\nEnter account number (-1 to end): ";
		cin >> accNum;

}while(accNum!=-1);





return 0;
}

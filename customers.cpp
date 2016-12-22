#include <iostream>
#include <cstdlib>
#include "customers.h"

using namespace std;

void print_customers(customer &head){
	customer *cur = &head;
	while(cur !=NULL){
		cout << cur->name << endl;
		cur = cur->next;
	}
}

customer *create_list(string name){
	customer *head = new customer();
	head->name = name;
	head->next = NULL;
	
	return head;
}

void insert_name(customer* head, string name){
	customer *cur = head;

	while(cur->next!=NULL){
		//do nothing
		cur = cur->next;
	}
	cur->next = create_list(name);
		
}

int list_length(customer *head){
	int len;
	while(head->next!=NULL)
		len++;

	return len;
}

	



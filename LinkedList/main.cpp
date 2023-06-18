#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	
	int vals=0;
	
	LinkedList list1;
	
	list1.insertToHead(12);
	list1.insertToHead(23);
	list1.insertToHead(34);
	list1.insertToHead(45);
	list1.insertToHead(56);
	list1.insertToTail(67);
	list1.insertAfter(23,79);
	
	cout <<"head: " <<list1.head->val<<endl;
	cout <<"tail: " <<list1.tail->val<<endl;
	
	list1.printAll();
	
	LinkedList userlist1;
	while (vals!=5){
	
	cout<<"\n-----LinkedList Operation-----\n";
	cout<<"1. Insert to head\n";
	cout<<"2. Insert to tail\n";
	cout<<"3. Insert after\n";
	cout<<"4. Print All\n";
	cout<<"5. Exit\n";
	
	cout<<"Input: ";
	cin>>vals;
		
		switch (vals){
			
			case 1:
				int usersL;
				if(userlist1.head !=NULL){
				userlist1.printAll();
				}
				
				cout<<"Insert To head: ";
				cin>>usersL;
				userlist1.insertToHead(usersL);
				userlist1.printAll();
				
				break;
				
			case 2:
				if(userlist1.head !=NULL){
				userlist1.printAll();
				}
				cout<<"Insert To tail: ";
				cin>>usersL;
				userlist1.insertToTail(usersL);
				userlist1.printAll();
				
				break;
				
			case 3:
				int A,B;
				cout<<"Insert After\n";
				cout<<"Insert Value: ";
				cin>>B;
				cout<<"After: ";
				cin>>A;
				userlist1.insertAfter(A,B);
				userlist1.printAll();
				
				break;
				
			
			case 4:
				userlist1.printAll();
				if(userlist1.head !=NULL){
				cout <<"head: " <<userlist1.head->val<<endl;
				cout <<"tail: " <<userlist1.tail->val<<endl;
				}
				break;
				
			case 5:
				cout<<"Exiting....";
				break;
			
			default:
				cout<<"Please input 1-4, and 5 if you want to Exit\n";
				break;
				
		}
			
	}
	
	return 0;
}
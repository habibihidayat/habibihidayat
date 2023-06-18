#include <iostream>
#include "LinkedList.h"

using namespace std;

void LinkedList::insertToHead(int input){
	Node *newNode = new Node();
	newNode->val = input;
	
	newNode->next = head;
	head = newNode;
	
	if(tail == NULL)
	tail = head;
}

void LinkedList::printAll(){
	Node *tmp = head;
	
	if (tmp == NULL){
		cout<<"LinkedList is Empty\n";
	}
	
	else{
	while(tmp!= NULL){
		cout<<tmp->val<<"->";
		tmp = tmp->next;
	}
	cout<<"NULL\n";
	}
	
}

void LinkedList::insertToTail(int input){
	Node *newNode = new Node();
	newNode->val = input;
	
	if (head == NULL) {
        LinkedList::insertToHead(input); 
        delete newNode;
    }
    else{
		Node *tmp = tail;
		tail->next = newNode;
		tail = newNode;
	}
}

void LinkedList::insertAfter(int x, int y){
	Node *newNode = new Node();
    	newNode->val = y;

    	Node *tmp = head;
    	bool checker = false;
    	if (head == NULL) {
        cout << "Linked List empty, can't continue the process" << endl;
        delete newNode;
        checker = true;
    }

    	while(tmp != NULL){
            if(tmp->val == x){
            	newNode->next = tmp->next;
            	tmp->next = newNode;
            if(tmp == tail){
                tail = newNode;
            }
            
            checker = true;
            return;
        }
        tmp = tmp->next;
    }
    
    	if(checker == false){
    		cout << "Value " << x << " not found in the list. Can't' continue the process." << endl;
        delete newNode;
		}
	
	
}
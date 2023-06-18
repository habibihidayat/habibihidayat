#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *left;
		Node *right;
		
		Node(){
			right = left = NULL;
		}
};


class BinaryTree {
	public:
		Node *root;
		
		BinaryTree();
		
		void insertNode(int);	
		Node *insertNodeRecursive(Node*, int);
		
		void deleteNode(int);		
		
		void inOrder();
		void inOrderRecursive(Node*);
		
		void preOrder();
		void preOrderRecursive(Node*);
		
		void postOrder();
		void postOrderRecursive(Node*);
		
		Node *searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		Node *findMin();
		Node *findMinRecursive(Node*);
		
		Node *findMax();
		Node *findMaxRecursive(Node*);
};













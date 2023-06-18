#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree(){
	root = NULL;
}

void BinaryTree::insertNode(int insertData){
	root = insertNodeRecursive(root, insertData);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertData){
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->data = insertData;
		return currentRoot;
	}
	
	if (insertData < currentRoot->data){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertData);
	}
	
	else if (insertData > currentRoot->data){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertData);
	}
	
	return currentRoot;
}




void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->data << ", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->data << ", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}


void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->data << ", ";
	}
}


Node* BinaryTree::searchNode(int value) {
    return searchNodeRecursive(root, value);
}

Node* BinaryTree::searchNodeRecursive(Node* currentNode, int value) {
    if (currentNode == nullptr) {
        return nullptr;
    }
    
    if (currentNode->data == value) {
        cout << "Node " << value << " ditemukan" << endl;
        return currentNode;
    }
    
    Node* leftResult = searchNodeRecursive(currentNode->left, value);
    if (leftResult != nullptr) {
        return leftResult;
    }
    
    return searchNodeRecursive(currentNode->right, value);
}


Node* BinaryTree::findMin(){
	return findMinRecursive(root);
}

Node* BinaryTree::findMinRecursive(Node* currentRoot){
    if (currentRoot->left == NULL) {
        cout << "Node Min: " << currentRoot->data << endl;
        return currentRoot;
    }
    return findMinRecursive(currentRoot->left);
}
 

Node* BinaryTree::findMax(){
	return findMaxRecursive(root);
}

Node* BinaryTree::findMaxRecursive(Node* currentRoot){
	if (currentRoot->right == NULL){
		cout << "Node Max : " << currentRoot->data << endl;
		return currentRoot;
	}
	return findMaxRecursive(currentRoot->right);
}

#include<iostream>
using namespace std;

class Node {
	public:
		Node* next = nullptr;
		int data;
};

void printLinkedList(Node* n){
	while(n -> next != nullptr){
		cout<<"Address : "<<n->next<<" Data : "<<n->data<<endl;
		n = n->next;
	}
}

int main(){
	
	Node* n1 = new Node();
	Node* n2 = new Node();
	Node* n3 = new Node();
	Node* n4 = new Node();
	Node* n5 = new Node();

	
	n1 -> data = 1;
	n2 -> data = 2;
	n3 -> data = 3;
	n4 -> data = 4;
	n5 -> data = 5;
	
	n1 -> next = n2;
	n2 -> next = n3;
	n3 -> next = n4;
	n4 -> next = n5;
	n5 -> next = nullptr;
	
	printLinkedList(n1);
	
	delete n1;
	delete n2;
	delete n3;
	delete n4;
	delete n5;
	
	return 0;	
}
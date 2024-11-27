#include<iostream>
using namespace std;


//class for nodes of linked list
class Node {
	private:
		Node* next;//pointer for next node pointing
		int data;//integer type data in the present node

	public:
		Node(){//constructor to assign default values to pouinter and data
		 	this -> next = nullptr;
		 	this -> data = 0;
		}		
	
		Node(int d){//constructor to give given value to data
			this -> next = nullptr;
			this -> data = d;
		}
		
		void pointsTo(Node* n){
			this -> next = n;
		}
		
		void printLinkedList(Node* n){
			while(n != nullptr){
			cout<<"Address : "<<n<<" Data : "<<n->data<<endl;
			n = n->next;
			}
		}
		
		void insertionAtStart(Node** head, int value){
			
			Node* newNode = new Node(value);//new node made with the value given
			
			newNode -> pointsTo(*head);//new node poining to the head
			
			*head = newNode;//giving data and pointer of new node to the node provided by the user to be modified
		}
		
		void insertionAtEnd(Node** head, int value){
			
			Node* newNode = new Node(value);//new node with the value given by to the constructor
			
			if(*head == nullptr){//check if starting node is empty or not
				head = nullptr;
				return;
			}
				
			Node* current = *head;//create a node that is presenting the current node
			
			while(current->next != nullptr){//for traversing the current node till it reaches at the end
				current = current -> next;
			}
			
			current->pointsTo(newNode);//current pointing to the node and the value given by the user
		}
		
		void insertionAtPosition(Node** head, int value, int position) {
    		Node* newNode = new Node(value); // Create a new node with the given value
    
    		if (*head == nullptr && position == 0){ // Special case for empty list and position 0
        		*head = newNode;
        		return;
    		}
    		
    		if (position == 0){ // Insert at the beginning
        		newNode->pointsTo(*head); // Point the new node to the current head
        		*head = newNode; // Update head to point to the new node
        		return;
    		}
    		
    		Node* current = *head;
    		int currentIndex = 0;

    // Traverse the list until the position-1 node is reached
    		while (current != nullptr && currentIndex < position - 1){
        		current = current->next;
        		currentIndex++;
    		}

    		if (current == nullptr) {
        		cout << "Position is greater than the length of the list." << endl;
        		return;
    		}
    		
    		// Insert the new node after the current node
    		newNode->pointsTo(current->next); // Point new node's next to the current node's next
    		current->pointsTo(newNode);	
    	}
};




int main(){
	//creating a linke dlist of 5 nodes
	
	Node* n1 = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	Node* n5 = new Node(5);

	
	//now joining the by pointing nodes towards each other
	//because the datamemvbers are declared privately
	//so we use the function to access it
	n1 -> pointsTo(n2);
	n2 -> pointsTo(n3);
	n3 -> pointsTo(n4);
	n4 -> pointsTo(n5);

	
	//printing the linked list
	cout<<"Original Linked list :\n";
	n1 -> printLinkedList(n1);
	
	//printing linked list after insertion at start
	n1 -> insertionAtStart(&n1, 0);
	cout<<endl<<"Linked list after inserting 0 at starting node :"<<endl;
	n1 -> printLinkedList(n1);
	
	//printing linked list after insertion at end
	n1 -> insertionAtEnd(&n1, 6);
	cout<<endl<<"Linked list after inserting 6 at end of linked list :"<<endl;
	n1 -> printLinkedList(n1);
	
	
	//printing linked list after inserting 20 at 4th node of linked list
	n1 -> insertionAtPosition(&n1, 20, 4);
	cout<<endl<<"Linked list after inserting 20 at 4th node of linked list :"<<endl;
	n1 -> printLinkedList(n1);
	
	
}
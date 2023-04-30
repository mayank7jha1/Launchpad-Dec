#include<iostream>
#include<vector>
using  namespace std;

class node {
public:
	int data;
	node* next;//Self Referencing Pointer

	//Constructor

	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};

//You should always have reference of the
// starting Point of the linked list

void InsertAtHead(node* &head, int data) {

	node* n = new node(data);
	n->next = head;
	head = n;

}

void Print(node* &head) {//i=0

	node* temp = head;

	while (temp != NULL) { //i<n

		cout << temp->data << "->";

		temp = temp->next;//i++
	}

	cout << "NULL" << endl;
}

int len(node* head) {//i=0

	node* temp = head;
	int length = 0;

	while (temp != NULL) { //i<n

		length++;

		temp = temp->next;//i++
	}
	return length;
}


int mid(node* head) {
	int middle = len(head) / 2;


	while (middle > 0) {
		head = head->next;
		middle--;
	}

	return head->data;
}

node* mid2(node* head) {
	int middle = len(head) / 2;


	while (middle > 0) {
		head = head->next;
		middle--;
	}
	return head;
}

//Second Middle Point in a Single Iteration
node* mid3(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;

		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

//First Middle Point in a Single Iteration
node* mid4(node* head) {
	node* slow = head;
	node* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;

		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

void ReverseLL(node* &head) {
	node* current = head;
	node* prev = NULL;
	node* n;
	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}

	head = prev;
}

node* ReverseLLUsingRecursion(node* head) {

	if (head == NULL or head->next == NULL) {
		return head;
	}

	node* new_head = ReverseLLUsingRecursion(head->next);

	node* current = head;
	current->next->next = current;
	current->next = NULL;

	return new_head;
}

void Cycle_Creation(node* &head) {
	//Reach at the last node:

	node* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	//cout << temp->data << " ";

	//Temp is pointing to last node

	temp->next = head->next->next->next;
}

bool isCycle(node* head) {

	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			return true;
		}
	}
	return false;
}

void Break_Cycle(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			break;
		}
	}

	//I have my meeting point:
	//fast and slow;

	node* prev = head;

	while (prev->next != fast) {
		prev = prev->next;
	}

	//prev is standing before MP and fast and slow is at MP.

	slow = head;

	//slow=head, fast=MP and prev= MP se ek kadam pehle.

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}

	//slow and fast pointer are at the origin of cycle
	//prrev is at the last node

	prev->next = NULL;
}







int main() {
	node* head = NULL;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	//Print(head);
	// cout << len(head) << endl;

	// cout << mid(head) << endl;

	// node* midPoint1 = mid2(head);

	// cout << midPoint1->data << endl;

	// cout << mid2(head)->data << endl;

	// cout << mid3(head)->data << endl;
	// cout << mid4(head)->data << endl;


	// ReverseLL(head);
	// Print(head);

	// node* head1 = ReverseLLUsingRecursion(head);
	// Print(head1);

	Cycle_Creation(head);
	cout << isCycle(head) << endl;
	Break_Cycle(head);
	cout << isCycle(head) << endl;
}











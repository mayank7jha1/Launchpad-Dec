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
	Print(head);
	cout << len(head) << endl;

	cout << mid(head) << endl;

	node* midPoint1 = mid2(head);

	cout << midPoint1->data << endl;

	cout << mid2(head)->data << endl;

	cout << mid3(head)->data << endl;
	cout << mid4(head)->data << endl;
}











#include<iostream>
using  namespace std;

class node {
public:
	int data;
	node* next;
	node* prev;

	node(int inputdata) {
		data = inputdata;
		next = NULL;
		prev = NULL;
	}
};


void ReverseLL(node* &head) {
	node* p = NULL;
	node* current = head;

	while (current != NULL) {
		p = current->prev;
		current->prev = current->next;
		current->next = p;
		current = current->prev;
	}
	if (p != NULL) {
		head = p->prev;
	}
}

void InsertAtHead(node* &head, int inputdata) {

	// node* n = new node();
	// n->data = inputdata;
	node* n = new node(inputdata);

	n->prev = NULL;
	n->next = head;

	if (head != NULL) {
		head->prev = n;
	}
	head = n;
}

int length(node* head) {
	node* temp = head;
	int ans = 0;
	while (temp != NULL) {
		ans++;
		temp = temp->next;
	}
	return ans;
}


void Print(node* head) {
	node* temp = head;
	int ans = 0;
	while (temp != NULL) {
		cout << temp->data << "<-->";
		temp = temp->next;
	}
	cout << "NULL" << endl;

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
	cout << length(head) << endl;
	ReverseLL(head);
	Print(head);
}






















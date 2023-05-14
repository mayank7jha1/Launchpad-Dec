#include<iostream>
#include<string>
using  namespace std;
template<typename T>

class node {
public:
	T key;
	int value;
	node<T>* next;

	node(T s, int x) {
		key = s;
		value = x;
		next = NULL;
	}
};


template<typename T>

class Hashmap {
	node<T>** table;
	int total_size;
	int current_size;

	//abc=ascii value of a*prime^index

	int hashfunction(string key) {
		int multiply = 1;
		int ans = 0;

		for (int i = 0; i < key.length(); i++) {
			ans += (key[i] % total_size) * (multiply % total_size);
			multiply = ((multiply  * 29) % total_size);
		}
		ans = ans % total_size;

		//abc==a*29^0+b*29^1+c*29^2;
		return ans;
	}

	void reshashing() {
		node<T>** oldtable = table;

		int old_table_size = total_size;
		table = new node<T>*[2 * total_size];
		total_size = 2 * total_size;


		for (int i = 0; i < total_size; i++) {
			table[i] = NULL;
		}

		current_size = 0;

		//Copy Process:

		for (int i = 0; i < old_table_size; i++) {
			node<T>* head = oldtable[i];

			while (head != NULL) {
				insert(head->key, head->value);
				head = head->next;
			}
		}

		delete []oldtable;
	}

public:

	Hashmap(int size = 7) {
		total_size = size;
		current_size = 0;
		table = new node<T>*[size];

		for (int i = 0; i < total_size; i++) {
			table[i] = NULL;
		}
	}

	void insert(T s, int v) {
		int HashIndex = hashfunction(s);
		node<T>* n = new node(s, v);
		current_size++;
		n->next = table[HashIndex];
		table[HashIndex] = n;

		if ((current_size / total_size * 1.0) >= 6.0) {
			reshashing();
		}
	}

	node<T>* search(T s) {
		int HashIndex = hashfunction(s);

		node<T>* head = table[HashIndex];
		while (head != NULL) {
			if (head->key == s) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}

	void Print() {
		for (int i = 0; i < total_size; i++) {
			cout << i << "->";

			node<T>* head = table[i];
			while (head != NULL) {
				cout << head->key << " " << head->value << " ";
				head = head->next;
			}
			cout << endl;
		}
	}
};

















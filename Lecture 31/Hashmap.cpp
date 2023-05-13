#include<iostream>
#include<string>
using  namespace std;

class node {
public:
	string key;
	int value;
	node*next;

	node(string s, int x) {
		key = s;
		value = x;
		next = NULL;
	}
};




class Hashmap {
	node** table;
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

public:

	Hashmap(int size = 7) {
		total_size = size;
		current_size = 0;
		table = new node*[size];

		for (int i = 0; i < total_size; i++) {
			table[i] = NULL;
		}
	}
};


int main() {

}














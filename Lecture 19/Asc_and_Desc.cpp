#include<iostream>
using  namespace std;

void Asc(int i) {
	if (i > 10) {
		return;
	}
	cout << i << " ";
	Asc(i + 1);
}

void Desc(int i) {
	if (i > 10) {
		return;
	}
	Desc(i + 1);
	cout << i << " ";
}


int main() {
	int n = 1;
	Asc(n);
	cout << endl;
	Desc(n);
}
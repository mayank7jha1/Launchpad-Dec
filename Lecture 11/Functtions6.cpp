#include<iostream>
using  namespace std;

int main() {
	int n = 100;

	cout << &n << endl;


	int a[] = {1, 2, 3, 4, 5};

	cout << a << endl;

	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;
}
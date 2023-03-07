#include<iostream>
using  namespace std;

int main() {


	int x = 10;
	cout << x << endl;
	cout << &x << endl;

	//int* ptr = &x;//Declaration and Initialisation

	int *ptr;//Declaration

	ptr = &x;//Initialisation

	int y = 100;

	ptr = &y;//Reinitialisation



	cout << ptr << endl;

	cout << *ptr << endl;//value at the address the pointer ptr is pointing to.

	double t = 100.20;

	int memory_taken = sizeof(t);
	cout << memory_taken << endl;

}









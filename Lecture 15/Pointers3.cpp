#include<iostream>
using  namespace std;

int main() {
	int x = 100;

	int y = 200;

	int* ptr = &x;

	cout << ptr << endl;
	cout << ptr + 1 << endl;

	cout << *ptr + 1 << endl;

	cout << *(ptr + 1) << endl;

//140701843191932
//140701843191936

}




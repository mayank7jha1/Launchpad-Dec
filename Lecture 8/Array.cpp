#include<iostream>
using  namespace std;
int a[100000007] = {0};
int main() {


	a[100] = 324;
	a[1001] = 321;

	for (int i = 0; i < 100000007; i++) {
		cout << a[i] << " ";
	}
}
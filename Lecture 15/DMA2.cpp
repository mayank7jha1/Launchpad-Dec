#include<iostream>
using  namespace std;

int *ptr;
//int z[n];

int main() {
	int n;
	cin >> n;
	int a[10];//Static Array

	int *a1 = new int[10];//Dynamic Array

	ptr = new int[n];
	delete[]ptr;
	ptr = new int[2 * n];


}
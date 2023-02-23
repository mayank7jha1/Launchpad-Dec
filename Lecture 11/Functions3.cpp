#include<iostream>
using  namespace std;

// int sum(int x, int y) {

// 	int z = x + y;
// 	z = z * 10;
// 	z = z + 50;
// 	return z;

// }
int sum(int a, int b) {

	int z = a + b;
	z = z * 10;
	z = z + 50;
	return z;

}


int main() {

	// int x = 20;
	// int y = 30;

	int x;
	int y;
	//int x,y;

	cin >> x >> y;
	int t = sum(x, y);
	cout << t << endl;

	cout << sum(x, y) << endl;
	//cout << z << " ";
}






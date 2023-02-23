#include<iostream>
using  namespace std;

int sum(int a, int b) {

	return a + b;
}

int sum(int a, int b, int c) {
	return a + b + c;
}

double sum(double a, double b) {
	return a + b;
}

int main() {
	int a = 30;
	int b = 40;
	cout << sum(a, b) << endl;;

	double t = 30.5;
	double z = 41.7;
	cout << sum(t, z) << endl;


	int z1 = 130;

	cout << sum(a, b, z1) << endl;


}
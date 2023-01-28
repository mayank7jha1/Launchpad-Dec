#include<iostream>
#include<climits>
using namespace std;


int main() {
	char ch;
	int n = 30;
	int m = 40;
	while (cin >> ch) {
		//ch=9 ek character matlab memory me ye ascii
		int x = ch - 48;//ch-'0';//9//8

		//n = n * 10 + x;//n=9//n=9*10+9=99*10+8==998

		m = 50;

	}
	cout << n + m << endl;
}
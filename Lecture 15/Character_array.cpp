#include<iostream>
using  namespace std;

// void Solve(char* ch) {
// 	ch[3] = 'z';
// }

char* Solve(char* ch) {
	ch[3] = 'm';
	return ch;
}


int main() {
	char ch[100];

	cin >> ch;
	cout << ch << endl;

	char* ch1 = Solve(ch);
	//cout << ch << endl;
	cout << ch1 << endl;
}
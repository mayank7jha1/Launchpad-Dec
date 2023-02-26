#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	char ch[n];
	//char ch1[] = {'m', 'a', 'y', '\0'};
	// /cout << ch1 << endl;
	cin >> ch;
	cout << ch << endl;;
	// for (int i = 0; ch[i] != '\0'; i++) {
	// 	cout << ch[i] << " ";
	// }
	int length = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		length++;
	}
	cout << length << endl;
}
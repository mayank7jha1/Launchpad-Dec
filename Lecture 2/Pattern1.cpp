#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int i = 0;
	int count = 1;
	while (i < n) {
		int j = 0;
		count = 1;
		while (j <= i) {
			//count = 1;
			cout << count << " ";
			j = j + 1;
			count = count + 1;
		}
		i = i + 1;
		cout << endl;
	}
}
#include<iostream>
using namespace std;


int main() {
	int start, end, jump;
	cin >> start >> jump >> end;
	int count = 1;

	while (start <= end) {
		if (count % 3 == 0) {
			cout << start << endl;
		}
		start = start + jump;
		count = count + 1;
	}
}
#include<iostream>
using namespace std;


int main() {

	int i = 1;
	while (i <= 10) {
		if (i == 5) {
			break;
		}
		cout << i << " ";
		i = i + 1;
	}
	cout << endl;

	int j = 1;
	while (j <= 10) {

		if (j == 5) {
			j = j + 1;
			continue;
		}
		cout << j << " ";
		j = j + 1;

	}
	//cout << "Mayank" << endl;


}
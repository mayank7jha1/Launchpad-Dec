#include<iostream>
using  namespace std;


void Subsequences(char* in, char* output, int i, int j) {

	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}


	//If i want to take this index element
	output[j] = in[i];
	Subsequences(in, output, i + 1, j + 1);


	//We are not taking a the current index
	//input .
	Subsequences(in, output, i + 1, j);



}

int main() {
	char in[100];

	cin >> in;
	char output[100];
	Subsequences(in, output, 0, 0);
}



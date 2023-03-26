#include<iostream>
using  namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };


void Solve(char* in, char* output, int i, int j) {


	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}



	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		//k=0;
		output[j] = keypad[digit][k];
		Solve(in, output, i + 1, j + 1);
	}

}

int main() {
	char in[105];
	cin >> in;
	char output[104];

	Solve(in, output, 0, 0);
}
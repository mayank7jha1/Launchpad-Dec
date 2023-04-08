#include<iostream>
using  namespace std;

void Permute(char* input, int index) {


	if (input[index] == '\0') {
		cout << input << endl;
		return;
	}

	//current Index that you are talking about

	for (int j = index; input[j] != '\0'; j++) {
		swap(input[index], input[j]);
		Permute(input, index + 1);
		swap(input[index], input[j]);//Backtracking
	}

}
void Permute2(string input, int index) {


	if (index == input.length()) {
		cout << input << endl;
		return;
	}

	//current Index that you are talking about

	for (int j = index; j < input.length(); j++) {
		swap(input[index], input[j]);
		Permute2(input, index + 1);
	}

}
void Permute3(string &input, int index) {


	if (index == input.length()) {
		cout << input << endl;
		return;
	}

	//current Index that you are talking about

	for (int j = index; j < input.length(); j++) {
		swap(input[index], input[j]);
		Permute3(input, index + 1);
	}

}

int main() {
	char input[100];
	string s;
	cin >> input >> s;

	Permute(input, 0);
	cout << endl << endl << endl;
	Permute2(s, 0);
	cout << endl << endl << endl;
	Permute3(s, 0);
}






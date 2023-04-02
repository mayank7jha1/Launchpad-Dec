#include<iostream>
using  namespace std;

int n;

void String_Equivalence(char* output, int i, int Max_Character) {

	if (i == n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}


	for (char ch = 'a'; ch <= Max_Character; ch++) {
		output[i] = ch;

		if (ch == Max_Character) {
			String_Equivalence(output, i + 1, Max_Character + 1);
		} else {
			String_Equivalence(output, i + 1, Max_Character);
		}
	}
}

int main() {
	cin >> n;

	char output[100];

	String_Equivalence(output, 0, 'a');
}
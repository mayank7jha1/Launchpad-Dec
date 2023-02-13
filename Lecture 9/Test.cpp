#include<iostream>
using  namespace std;

int main() {
	int freq[] = {0, 5, 3, 4, 1, 7};

	for (int i = 0; i < 6; i++) {
		if (freq[i] > 0) {
			//tumhe freq[i] timees loop chalana hain
			int j = 1;
			while (j <= freq[i]) {
				cout << i << " ";
				j++;
			}
		}
	}
}
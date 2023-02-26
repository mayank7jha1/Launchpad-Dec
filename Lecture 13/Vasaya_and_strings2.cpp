#include<iostream>
using  namespace std;
int n, k;
string s;

int Solve(char x) {
	int j = 0;//Start of the window

	//i will represent the end point of the window.
	int i = 0;

	int maximum_substring = 0;//This will store my answeer
	//which is the maximum substring of same character.

	int count = 0;//Kitni bar aapne changes kiye hain.


	for (i = 0; i < s.length(); i++) {
		//agar s[i] x ke equal hain toh kuch mat karo.

		if (s[i] != x) {
			//Hum maan lenge ki is window m aapko ye character
			//dusre me change karna padega.
			count++;
		}

		//whatt if aapne is window me kaam jo karna tha
		//vo jada bar kardiya.

		while (count > k and j <= i) {

			if (s[j] != x) {
				count--;
			}
			j++;
		}
		//Calculate the length of the window everytime.
		maximum_substring = max(i - j + 1, maximum_substring);

		// if (i - j + 1 > maximum_substring) {
		// 	maximum_substring = i - j + 1;
		// }
	}
	return maximum_substring;

}





int main() {

	cin >> n >> k;
	cin >> s;

	//You want to change b->a
	int ans1 = Solve( 'a');
	//you will not change the character passed through function

	//you want to change a->b
	int ans2 = Solve( 'b');


	cout << max(ans1, ans2) << endl;
}

// int ans1 = 10;
// int ans2 = 20;
// int ans3 = 40;

// int maximum = max(ans1, max(ans2, ans3));

// int maximum = max({ans1, ans2, ans3});
















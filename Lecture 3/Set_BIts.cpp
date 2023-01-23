#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int digit = 0;
	int reverse = 0;
	int sum = 0;
	while (n > 0) {
		digit = n % 2;
		n = n / 2;
		//reverse = reverse * 10 + digit;
		sum = sum + digit;
	}
	cout << sum << endl;
}
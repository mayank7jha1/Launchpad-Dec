#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 1; i < n; i++) {
		int temp = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > temp) {
			count++;
			//Shifting
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	cout << count << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
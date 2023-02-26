#include<iostream>
using  namespace std;

int main() {
	int n, total_time_provided;

	cin >> n >> total_time_provided;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int total_time_consumed = 0;

	int j = 0;//Starting Point

	int books_read = 0;

	for (int i = 0; i < n; i++) {
		total_time_consumed = total_time_consumed + a[i];
		books_read++;

		if (total_time_consumed > total_time_provided) {
			total_time_consumed =
			    total_time_consumed - a[j];
			books_read--;
			j++;
		}
	}
	cout << books_read << endl;
}



















#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	//n:-> No of Rows
	//m:-> No of Columns

	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int max_row_sum = INT_MIN;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum = sum + a[i][j];
		}
		cout << sum << " ";
		max_row_sum = max(max_row_sum, sum);
	}
	cout << endl;

	cout << max_row_sum << endl;

	int max_column_sum = INT_MIN;

	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum = sum + a[j][i];
		}
		cout << sum << " ";
		max_column_sum = max(max_column_sum, sum);
	}
	cout << endl;

	cout << max_column_sum << endl;










	// for (int  i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
}
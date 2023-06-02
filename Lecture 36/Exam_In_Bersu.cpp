#include<iostream>
#include<cmath>
using  namespace std;
#define int long long
const int N = 2e5 + 10;

int n, limit;
int a[N];
int Student_Time[101] = {0};

void Solve() {
	int total_time = 0;
	for (int i = 0; i < n; i++) {

		int difference = total_time - limit + a[i];
		double Student_Removed = 0;

		if (difference > 0) {
			for (int j = 100; j > 0; j--) {
				int contribution = j * Student_Time[j];
				if (difference <= contribution) {
					Student_Removed += ((difference - 1 + j) / j);
					//Student_Removed += ceil((double)difference / (j));
					break;
				}
				Student_Removed = Student_Removed + Student_Time[j];
				difference = difference - contribution;
			}
		}

		total_time += a[i];
		Student_Time[a[i]]++;
		cout << Student_Removed << " ";
	}
}

int32_t main() {
	cin >> n >> limit;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve();
}





#include<iostream>
using  namespace std;

int Sum(int a[], int index, int n) {
	if (index == n) {
		return 0;
	}

	int ans = a[index] + Sum(a, index + 1, n);

	//int ans=Sum(a,index+1,n);
	//int total_ans=ans+a[index];
	//return total_ans;

	return ans;
}

int Sum2(int a[], int n) {

	if (n == 0) {
		return 0;
	}

	int ans = a[n - 1] + Sum2(a, n - 1);

	return ans;
}

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Sum(a, 0, n) << endl;
	cout << Sum2(a, n) << endl;
}






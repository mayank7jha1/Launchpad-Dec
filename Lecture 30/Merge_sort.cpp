#include<iostream>
using  namespace std;

void Merge(int* a, int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];

	while (i <= mid and j <= e) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			i++;
			k++;
		} else {
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		temp[k] = a[i];
		i++;
		k++;
	}

	while (j <= e) {
		temp[k] = a[j];
		j++;
		k++;
	}

	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}
}

void MergeSort(int* a, int s, int e) {

	if (s >= e) {
		return;
	}

	//Divide
	int mid = (s + e) / 2;

	MergeSort(a, s, mid);
	MergeSort(a, mid + 1, e);

	Merge(a, s, e);
}

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	MergeSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}







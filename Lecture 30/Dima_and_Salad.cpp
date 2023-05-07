#include<iostream>
using  namespace std;
int n, k;
int* taste;
int* calorie;


int Dima_and_Salad(int index, int Sum) {

	if (index == n) {
		if (Sum == 0) {
			return 0;
		} else {
			return -1e8;
		}
	}


	//When you have choosen this frruit
	int Option1 = taste[index] +
	              Dima_and_Salad(index + 1,
	                             Sum + taste[index] - k * calorie[index]);

	//When you have not choosing this fruit
	int Option2 = 0 + Dima_and_Salad(index + 1, Sum);

	return max(Option1, Option2);
}

int main() {
	cin >> n >> k;
	taste = new int[n];
	calorie = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> calorie[i];
	}

	int ans = Dima_and_Salad(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}




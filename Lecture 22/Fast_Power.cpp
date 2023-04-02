#include<iostream>
using  namespace std;

//x^y

int fast_power_Using_Recursion(int x, int y) {


	if (y == 0) {
		return 1;
	}

	int small_ans = fast_power_Using_Recursion(x, y / 2);

	if (y % 2 == 1) {
		return small_ans * x * small_ans;
	}

	return small_ans * small_ans;

}

int main() {
	int x, y;
	cin >> x >> y;
	cout << fast_power_Using_Recursion(x, y) << endl;
}
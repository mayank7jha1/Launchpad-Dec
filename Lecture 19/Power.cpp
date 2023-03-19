#include<iostream>
using  namespace std;

int Power(int n, int p, int count) {

	if (count == p) {
		return 1;
	}
	// n*(baaki ka answer recursion ko bola laake do)
	int ans = Power(n, p, count + 1);
	int total_ans = ans * n;
	return total_ans;
}

int Power2(int n, int p) {

	if (p == 0) {
		return 1;
	}

	int ans = Power2(n, p - 1);
	int total_ans = ans * n;
	return total_ans;
}


int main() {
	//n^p;

	//n*n*n*n*n*n..........(p times)

	int n, p;
	cin >> n >> p;
	// int count = 1;
	int count = 0;
	cout << Power(n, p, count) << endl;
	cout << Power2(n, p) << endl;
}




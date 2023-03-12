#include<iostream>
#include<math.h>
#include<iomanip>
using  namespace std;
#define D double
#define PI 3.141592653

D Derivative(D x, D b, D c) {
	return (sin(x) * (2 * x + b) - (x * x + b * x + c) * cos(x));
}



D IsThisJee(D b, D c) {
	D s = 0;
	D e = PI / 2;
	double ans;
	int count = 0;
	while (s <= e) {
		D mid = (s + e) / 2;
		D value = Derivative(mid, b, c);

		if (value < 0) {
			ans = mid;
			s = mid;
		} else {
			ans = mid;
			e = mid;
		}
		count++;
		if (count == 100) {
			break;
		}
	}
	return ((ans * ans) + (ans * b) + c) / sin(ans);
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		D b, c;
		cin >> b >> c;
		D ans = IsThisJee(b, c);
		cout << setprecision(11) << ans << endl;
	}
}







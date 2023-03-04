#include<iostream>
using  namespace std;
//#define int long long

string a;
//sb ka matalb hain ki ek hamburger me kitne bread chahiye
long long nb, ns, nc, pb, ps, pc, r, sb = 0, ss = 0, sc = 0;

long long hamburger() {

	long long s = 0;
	long long e = 1e12 + 100;


	long long ans = -1;

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'B') {
			sb++;
		} else if (a[i] == 'S') {
			ss++;
		} else {
			sc++;
		}
	}
	long long bread_ka_paisa = 0;
	long long sausage_ka_paisa = 0;
	long long cheese_ka_paisa = 0;

	while (s <= e) {
		long long mid = (s + e) / 2;


		if ((((mid * sb) - nb) * pb) >= 0) {
			bread_ka_paisa = (((mid * sb) - nb) * pb);
		} else {
			bread_ka_paisa = 0;
		}

		if ((((mid * ss) - ns)*ps) >= 0) {
			sausage_ka_paisa = (((mid * ss) - ns) * ps);
		} else {
			sausage_ka_paisa = 0;
		}

		if ((((mid * sc) - nc)*pc) >= 0) {
			cheese_ka_paisa = (((mid * sc) - nc) * pc);
		} else {
			cheese_ka_paisa = 0;
		}

		long long total_paisa =
		    bread_ka_paisa + sausage_ka_paisa + cheese_ka_paisa;

		if (total_paisa <= r) {
			s = mid + 1;
			ans = mid;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}


int main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	cout << hamburger() << endl;

}
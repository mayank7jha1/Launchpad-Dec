#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long



class Activity {
public:
	int starting_time;
	int ending_time;
};

Activity a[100005];
//a[i]==st,ep

// pair<int,int>p[100005];

bool compare(Activity a, Activity b) {

	if (a.ending_time == b.ending_time) {
		if (a.starting_time < b.starting_time) {
			return true;
		} else {
			return false;
		}
	}

	if (a.ending_time < b.ending_time) {
		return true;
	} else {
		return false;
	}
}


void Solve(int n) {
	sort(a, a + n, compare);

	int count = 1;
	int prev_ending_time = a[0].ending_time;

	for (int i = 0; i < n; i++) {
		if (a[i].starting_time >= prev_ending_time) {
			count++;
			prev_ending_time = a[i].ending_time;
		}
	}
	cout << count << endl;
}


int32_t main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i].starting_time >> a[i].ending_time;
		}
		Solve(n);
	}
}
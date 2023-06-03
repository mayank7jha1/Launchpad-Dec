#include<iostream>
#include<queue>
#include<set>
using  namespace std;
#define int long long
const int N = 1e5 + 10;



int IPCTrainers() {

	int Total_Trainers, Days;
	cin >> Total_Trainers >> Days;

	int Starting_Day[N] = {0}, Lectures[N] = {0},
	                      Sadness[N] = {0};

	priority_queue<pair<int, int>>pq;

	for (int i = 0; i < Total_Trainers; i++) {
		cin >> Starting_Day[i] >> Lectures[i] >> Sadness[i];
		pq.push({Sadness[i], i});
	}



	int Lectures_Taken[N] = {0};

	set<int>s;//Available Days

	for (int i = 1; i <= Days; i++) {
		s.insert(i);
	}

	while (pq.empty() == 0) {
		pair<int, int>p2 = pq.top();
		// auto p2 = pq.top();
		pq.pop();

		int Arrival = Starting_Day[p2.second];
		int Optimistic_End_Day = Arrival + Lectures[p2.second] - 1;


		for (int i = Arrival; i <= Optimistic_End_Day; i++) {
			auto itr = s.lower_bound(i);

			if (itr == s.end()) {
				break;
			} else {
				Lectures_Taken[p2.second]++;
				s.erase(itr);
			}
		}
	}

	int Sadness_Kitni_Hue = 0;

	for (int i = 0; i < Total_Trainers; i++) {
		Sadness_Kitni_Hue += (Lectures[i] - Lectures_Taken[i]) * Sadness[i];
	}

	return Sadness_Kitni_Hue;
}




int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cout << IPCTrainers() << endl;
	}
}
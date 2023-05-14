#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using  namespace std;
// #define int long long


int Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	map<pair<string, string>, int>mp;

	string prev_destination = "";

	//Map relation create ki ek journey par
	//kitna cost hain and saare journey ka
	//cost aise meere pass hoga.

	for (int i = 0; i < n; i++) {

		string starting_point, ending_point;
		cin >> starting_point >> ending_point;

		int price;

		if (prev_destination == starting_point) {
			//This is a Transshipmeent
			price = b;
		} else {
			price = a;
		}

		prev_destination = ending_point;

		if (starting_point > ending_point) {
			swap(starting_point, ending_point);
		}

		if (mp.find({starting_point, ending_point}) !=
		        mp.end()) {
			mp[ {starting_point, ending_point}] += price;
		} else {
			mp[ {starting_point, ending_point}] = price;
		}
	}


	// for (auto x : mp) {
	// 	cout << x.first.first << " ";
	// 	cout << x.first.second << " ";

	// 	cout << x.second << " ";
	// }

	vector<int>cost;
	int Total_Price = 0;

	for (pair<pair<string, string>, int> x : mp) {
		cost.push_back(x.second);
		Total_Price += x.second;
	}


	sort(cost.rbegin(), cost.rend());
	// sort(v.begin(), v.end(), greater<int>());

	// sort(v.begin(), v.end());
	// reverse(v.begin(), v.end());

	for (int i = 0; i < cost.size() and i < k; i++) {
		if (cost[i] >= f) {
			Total_Price = Total_Price - cost[i] + f;
		} else {
			break;
		}
	}

	return Total_Price;
}






int32_t main() {
	cout << Travel_Cards() << endl;
}
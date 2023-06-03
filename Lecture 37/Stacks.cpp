#include<iostream>
#include<stack>
#include<vector>
using  namespace std;

int main() {
	stack<int>s;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.push(x);
	}

	//Stack me aap bina upar vaale
	//element ko remove kare
	//niche vaale element ko access hi
	//nahi kar sakte

	while (s.empty() == 0) {
		cout << s.top() << " ";
		s.pop();
	}


	vector<int>v;


	//cout << s.empty() << endl;


	//jab tak stack khali na hojaye uske
	//top ke eelement ko nikalo and print karo
	//and then top ke niche vaale element par
	//chale jao.

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	cout << endl;
	v.pop_back();//O(constant)

	for (auto x : v) {
		cout << x << " ";
	}

	//stack--->top/empty/push/pop




}

















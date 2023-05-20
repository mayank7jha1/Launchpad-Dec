class Solution {
public:
	int longestConsecutive(vector<int>& a) {
		unordered_set<int>s;

		for (int x : a) {
			s.insert(x);
		}
		int ans = 0;
		for (int i = 0; i < a.size(); i++) {
			if (s.count(a[i] - 1) == 1) {
				continue;
			} else {
				int count = 0;
				int x = a[i];

				while (s.count(x) == 1) {
					x++;
					count++;
				}
				ans = max(count, ans);
			}
		}
		return ans;
	}
};
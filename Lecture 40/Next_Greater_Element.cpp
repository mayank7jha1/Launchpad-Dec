class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		stack<int>st;
		map<int, int>mp;

		st.push(INT_MAX);

		for (int i = nums2.size() - 1; i >= 0; i--) {
			int current = nums2[i];


			while (current >= st.top()) {
				st.pop();
			}
			if (st.top() == INT_MAX) {
				mp[nums2[i]] = -1;
			} else {
				mp[nums2[i]] = st.top();
			}

			st.push(current);
		}

		vector<int>ans;

		for (auto x : nums1) {
			ans.push_back(mp[x]);
		}

		return ans;
	}
};
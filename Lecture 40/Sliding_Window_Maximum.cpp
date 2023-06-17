class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		deque<int>dq;

		int n = nums.size();
		if (k == 1) {
			return nums;
		}
		vector<int>ans;

		for (int i = 0; i < k; i++) {

			while (!dq.empty() and nums[i] >= nums[dq.back()]) {
				dq.pop_back();
			}

			dq.push_back(i);
		}


		for (int i = k; i < n; i++) {

			ans.push_back(nums[dq.front()]);

			while (!dq.empty() and dq.front() <= i - k) {
				dq.pop_front();
			}

			while (!dq.empty() and nums[i] >= nums[dq.back()]) {
				dq.pop_back();
			}

			dq.push_back(i);
		}
		ans.push_back(nums[dq.front()]);
		return ans;
	}
};
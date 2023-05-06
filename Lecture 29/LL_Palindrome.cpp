/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

	bool isPalindrome(vector<int>&v) {
		int i = 0;
		int j = v.size() - 1;

		while (i < j) {
			if (v[i] != v[j]) {
				return false;
			}
			i++;
			j--;
		}
		return true;
	}


	bool isPalindrome(ListNode* head) {
		vector<int>ans;

		ListNode* temp = head;

		while (temp != NULL) {
			ans.push_back(temp->val);
			temp = temp->next;
		}

		return isPalindrome(ans);

		// vector<int>ans2 = ans;

		// int i = 0;
		// int j = ans2.size() - 1;

		// while (i < j) {
		// 	swap(ans2[i], ans2[j]);
		// }

		// //reverse(ans2.begin(), ans2.end());

		// for (int i = 0; i < ans.size(); i++) {
		// 	if (ans[i] != ans2[i]) {
		// 		return false;
		// 	}
		// }

		// return true;

	}
};










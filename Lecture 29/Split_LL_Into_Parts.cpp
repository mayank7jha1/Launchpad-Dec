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
    int length(ListNode* head) {
        int ans = 0;
        while (head != NULL) {
            ans++;
            head = head->next;
        }
        return ans;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {

        int n = length(root);
        ListNode* head = root;

        int Least_Elements_in_Every_Part = n / k;
        int ElementsRemaining = n % k;

        int count = 1;
        vector<ListNode*>ans;

        //k>n;
        if (Least_Elements_in_Every_Part == 0) {

            for (int i = 0; i < k; i++) {

                if (head != NULL) {

                    ListNode*n = head->next;
                    head->next = NULL;
                    ans.push_back(head);
                    head = n;

                } else {

                    ans.push_back(NULL);

                }
            }
        } else {

            while (head != NULL) {
                ans.push_back(head);
                int x = 0;
                if (ElementsRemaining > 0) {
                    x = 1;
                }
                ElementsRemaining--;

                for (int i = 1; i < Least_Elements_in_Every_Part + x; i++) {
                    head = head->next;
                }
                ListNode*n = head->next;
                head->next = NULL;
                head = n;

                count++;

                if (count == k) {
                    ans.push_back(head);
                    break;
                }
            }
        }
        return ans;

    }
};
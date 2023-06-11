/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;

    void FindPath(TreeNode* root, int sum) {
        if (root == NULL) {
            return;
        }
        path.push_back(root->val);

        if (root->val == sum and !root->left and !root->right) {
            ans.push_back(path);
        } else {
            FindPath(root->left, sum - root->val);
            FindPath(root->right, sum - root->val);
        }

        path.pop_back();

    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        FindPath(root, targetSum);
        return ans;
    }
};
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
    unordered_map<TreeNode*, bool>um;
    int camera = 0;

    void PlaceCamera(TreeNode* root, TreeNode* parent) {
        if (root == NULL) {
            return;
        }


        PlaceCamera(root->left, root);
        PlaceCamera(root->right, root);

        if ((parent == NULL and um.count(root) == 0) or
                um.count(root->left) == 0 or um.count(root->right) == 0) {
            camera++;
            um[root] = true;
            um[root->left] = true;
            um[root->right] = true;
            um[parent] = true;
        }
    }

    int minCameraCover(TreeNode* root) {
        um.insert({NULL, true});
        PlaceCamera(root, NULL);
        return camera;
    }
};
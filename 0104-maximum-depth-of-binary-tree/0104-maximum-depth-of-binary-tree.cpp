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

    int maxHeight(TreeNode* root){
        if(root == nullptr) return 0;
        else{
            int left = maxHeight(root->left);
            int right = maxHeight(root->right);
            int ans = max(right, left);
            return ans+1;
        }
    }

    int maxDepth(TreeNode* root) {
        int ans = maxHeight(root);
        return ans;
    }
};
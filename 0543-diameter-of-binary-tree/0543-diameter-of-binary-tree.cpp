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

    int height(TreeNode* root){
        if(root == nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right); // Calculate the height of the right subtree.
        int ans = max(left, right);
        return ans + 1; // Add 1 to account for the current node.
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int l = diameterOfBinaryTree(root->left);
        int r = diameterOfBinaryTree(root->right);
        int both = height(root->left) + height(root->right); 
        return max(max(l ,r), both);
    }
};

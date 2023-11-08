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
    vector<int> ino;
    void inorder(TreeNode* temp){
        if(temp == nullptr) return;
        inorder(temp->left);
        ino.push_back(temp->val);
        inorder(temp->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i = 1; i < ino.size(); i++){
            if(ino[i-1] >= ino[i]){ return false;}
            cout<<ino[i-1]<<" ";
        }
        return true;
    }
};
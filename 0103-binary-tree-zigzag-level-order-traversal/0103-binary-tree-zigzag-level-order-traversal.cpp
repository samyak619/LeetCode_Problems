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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        int swap = 0;
        while(!q.empty()){
            vector<int> curr;
            int n = q.size();
            for(int i = 0; i<n; i++){
                TreeNode * temp = q.front();
                q.pop();
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
                curr.push_back(temp->val);
            }
            if(swap % 2 == 0) ans.push_back(curr);
            else{
                reverse(curr.begin(),curr.end());
                ans.push_back(curr);   
            } 
            swap++;
        }
        return ans;
    }
};
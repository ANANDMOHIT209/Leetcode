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
    void in(TreeNode* root, vector<int> &v){
    if(root!=NULL){
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    }
    bool f(TreeNode *root,long long int low,long long int high){
        if(root==NULL) return true;
        if(root->val<=low || root->val>=high) return false;
        return f(root->left,low,root->val) && f(root->right,root->val,high);
    }
    bool isValidBST(TreeNode* root) {
        long long int low = -1000000000000, high = 1000000000000;
        return f(root, low, high);
    }
};
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
    void pre(TreeNode* root,vector<int>&v){
        if(root!=NULL){
        v.push_back(root->val);
        pre(root->left,v);
        pre(root->right,v);   
        }
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>v;
        // pre(root,v);
        // return v;
        vector<int>res;
        if(root==NULL) return res;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();
            res.push_back(curr->val);
            if(curr->right!=NULL)
                st.push(curr->right);
            if(curr->left!=NULL)
                st.push(curr->left);
        }
        return res;
    }
};
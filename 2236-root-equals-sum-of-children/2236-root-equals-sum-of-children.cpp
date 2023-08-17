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
    bool checkTree(TreeNode* root) {
        if(root==NULL) return true;
        
        if(root->left!=NULL && root->right!=NULL)
        return (root->val==root->right->val+root->left->val && 
                    checkTree(root->left) &&
                    checkTree(root->right));
        else if((root->left!=NULL))
            return (root->val==+root->left->val && 
                    checkTree(root->left) &&
                    checkTree(root->right));
        else if((root->right!=NULL))
            return (root->val==+root->right->val && 
                    checkTree(root->left) &&
                    checkTree(root->right));
      return (      checkTree(root->left) &&
                    checkTree(root->right));
      
    }
};
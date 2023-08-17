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

    int findMaxPathSum(TreeNode * root, int & maxi) {
    if (root == NULL) return 0;

    int lh =max(0, findMaxPathSum(root->left, maxi));
    int rh = max(0, findMaxPathSum(root->right, maxi));
    int temp= max(max(lh,rh)+root->val,root->val);
    maxi= max(maxi,root->val+lh+rh);
    return max(lh,rh)+root->val;
    }
    int maxPathSum(TreeNode* root) {
     int res=INT_MIN;
     findMaxPathSum(root,res);
     return res;
    }
};
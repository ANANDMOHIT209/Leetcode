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
    int maxDepth(TreeNode* root) {
        
        int level=0;
        if(root==NULL)
            return level;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            while(n>0){
               TreeNode* curr=q.front();
                q.pop(); 
                if(curr->left!=nullptr)
                    q.push(curr->left);
                if(curr->right!=nullptr)
                    q.push(curr->right);
                n--;
            }
            level++;
        }
        return level;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root)
            return NULL;
        queue<Node*>q;
        // vector<vector<int>>v;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            // vector<int>v1;
            // int i=n;
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                // v1.push_back(curr->val);
                if(i==n-1) 
                    curr->next=NULL;
                else
                 curr->next=q.front();
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
                // n--;
            }
           
            // v.push_back(v1);
        }
         return root;
    }
};
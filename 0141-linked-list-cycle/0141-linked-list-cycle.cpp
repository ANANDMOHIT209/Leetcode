/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_set<ListNode *> s;
        // ListNode* curr=head;
        // while(curr!=NULL){
        //     if(s.find(curr)!=s.end())
        //         return true;
        //     s.insert(curr);
        //     curr=curr->next;
        // }
        // return false;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
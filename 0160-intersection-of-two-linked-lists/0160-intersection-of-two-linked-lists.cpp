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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // set<ListNode*>s;
        // ListNode* curr=headA;
        // while(curr!=NULL){
        //     s.insert(curr);
        //     curr=curr->next;
        // }
        // curr=headB;
        // while(curr!=NULL){
        //     auto it=s.find(curr);
        //     if(it!=s.end()){
        //         return curr;
        //     }
        //     curr=curr->next;
        // }
        // return NULL;
        
        int l1=0,l2=0;
        ListNode*currA=headA;
        ListNode*currB=headB;
        while(headA!=NULL || headB!=NULL){
            if(headA!=NULL){
                l1++;
                headA=headA->next;
            }
            if(headB!=NULL){
                l2++;
                headB=headB->next;
            }
        }
        int diff=l1-l2;
        headA=currA;
        headB=currB;
        if(diff>=0){
            while(diff!=0){
                diff--;
                headA=headA->next;
            }
        }
        else{
            while(diff!=0){
                diff++;
                headB=headB->next;
            }
        }
        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
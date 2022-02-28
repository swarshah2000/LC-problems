/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *nxt = head, *curr = head;
    
    while(curr!=NULL){
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        
    }
    return prev;
    
    
    }
};
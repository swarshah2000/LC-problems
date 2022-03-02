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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        ListNode *fast=head;
        ListNode *slow= head;
    
        if(head==NULL)
            return head;
        while(head->val==val){
            head=head->next;
            if(head==NULL){
                break;
            }
        }
        
        while(slow->next!=NULL){
            fast=fast->next;
            if(fast->val==val){
                slow->next=fast->next;
            }
            else{
                slow=slow->next;
            }
            
        }
        return head;
       
        
    }
};
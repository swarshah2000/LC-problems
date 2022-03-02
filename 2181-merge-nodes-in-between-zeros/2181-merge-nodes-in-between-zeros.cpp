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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp=head;
        
        while(slow!=NULL){
            fast=fast->next;
            slow->val+=fast->val;
            if(fast->next->next==NULL){
                // fast->next=NULL;
                slow->next=NULL;
                
                slow=slow->next;
            }
            if(fast->val==0){
                slow->next=fast;
                slow=slow->next;
            }
        }
    
            
        
        
        return temp;
    }
};
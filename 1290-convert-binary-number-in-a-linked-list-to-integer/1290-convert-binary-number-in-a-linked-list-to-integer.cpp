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
    int getDecimalValue(ListNode* head) {
        int num=0;
        int ctr=0;
            ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
           ctr++;
        }
        

    while(ctr>=1){
        num=num+(head->val)*pow(2,ctr-1);
        head=head->next;
        ctr--;
    }
        
    return num;
    }
};
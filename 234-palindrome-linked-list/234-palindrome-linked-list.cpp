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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        stack<int> stack;
        stack.push(slow->val);

        while(fast!=NULL && fast->next!=NULL)
        {
            
            fast=fast->next->next;
            if(fast==NULL){
                break;
            }
            if(fast->next==NULL){
                slow=slow->next;
                break;
            }
            slow=slow->next;
            stack.push(slow->val);
            
    }
        while(slow->next!=NULL){
            slow=slow->next;
            if(slow->val !=stack.top())
                return false;
            stack.pop();
        }
        return true;
    }
};
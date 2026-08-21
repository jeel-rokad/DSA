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
    ListNode* deleteDuplicates(ListNode* head) {

        // if the list is empty -> no duplicates -> return it
         if(!head || !head->next) 
         return head;

        // curr will traverse the list, starting from the head
        ListNode* curr = head;

        while(curr && curr->next){
            // if the currnt node val = the next node val,
            // means its duplicate, skip the next node by pointing
            // current's next to the node after it 
            if(curr->val == curr->next->val){
                curr->next = curr->next->next;
            }
            else{
                // values are different
                curr=curr->next;
            }
        }
        return head;
    }
};
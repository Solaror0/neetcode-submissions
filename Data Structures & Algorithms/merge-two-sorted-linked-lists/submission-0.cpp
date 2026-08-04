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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode dummy(0);
        ListNode* pointer = &dummy;
        while(h1 != nullptr and h2!= nullptr){
            if(h1->val < h2->val){
                pointer->next = h1;
                h1 = h1->next;

                
            } else{
                pointer->next = h2;
                h2 = h2->next;
              
            }
            pointer = pointer->next;
        }
        if(h1 == nullptr){
                    pointer->next = h2;
                    
                } else{
                    pointer->next = h1;
                    
                }
       
        return dummy.next;
    }
};

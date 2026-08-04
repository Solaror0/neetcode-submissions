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

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nex = curr->next;

        if(head == nullptr){
            return head;
        }
        while(nex!=nullptr){
            curr->next = prev;
            prev = curr;
            curr = nex;
            nex = curr->next;
            //cout << " p " << prev->val << " c " << curr->val << endl;
        }
        if(nex == nullptr){
            curr->next = prev;
        }

        return curr;

        
    }
};

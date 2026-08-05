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
    bool hasCycle(ListNode* head) {
        std::unordered_set<ListNode*> inventory;

        if(head == nullptr){return false;}
        while(head->next != nullptr){
            if(inventory.contains(head->next)){
                return true;
            }
            inventory.insert(head);
            head = head->next;
        }

        return false;
    }
};

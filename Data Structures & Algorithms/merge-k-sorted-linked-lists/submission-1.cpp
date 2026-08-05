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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(size(lists)==1){
            return lists[0];
        }
        ListNode* accumulator = mergeTwo(nullptr, nullptr);
        for (int i = 0; i<size(lists); i++){
           //  cerr << "Possibility 3" << endl;
            accumulator = mergeTwo(accumulator, lists[i]);
           // cerr << "Possibility 4" << endl;
        }
        return accumulator;
    }


    ListNode* mergeTwo(ListNode* list1, ListNode* list2){
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* pointer = dummy;
       // cerr << "Possibility 1" << endl;
        if(list1 == nullptr && list2 == nullptr){
            return nullptr;
        }
        
        while(h1!=nullptr && h2!=nullptr){
           // cerr << "Possibility 2 " <<  h1 << " " << h2 << endl;
            if(h1->val <= h2->val){
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
        return dummy->next;
    }
};

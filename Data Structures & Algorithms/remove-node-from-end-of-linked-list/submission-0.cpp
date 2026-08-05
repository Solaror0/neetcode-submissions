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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* counter = head;
        if(head == nullptr){return head;}
        int count = 1;

        while(counter->next != nullptr){
            count++;
            counter = counter->next;
        }
        cout<<count<<endl;

        int indexTarget = count - n;
       
        ListNode* hproxy = head;
        ListNode dummy(0);
        ListNode* pointer = &dummy;
        pointer->next = hproxy;
        int index = 0;
         cout << count << " " << indexTarget << " " << index << endl;
        while(index!=indexTarget){
            pointer = pointer->next;
            hproxy = hproxy->next;
            pointer->next = hproxy;
            index++;
        }

        ListNode* remove = pointer->next;
        ListNode* after = pointer->next->next;
        ListNode* before = pointer;
        cout << remove ->val << " " << after << " " << before << endl;

        before->next = after;
        remove->next = nullptr;

        return dummy.next;


    }
};

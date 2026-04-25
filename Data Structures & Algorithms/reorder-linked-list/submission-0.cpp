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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* middle = head;
        ListNode* prev = nullptr;
        while(fast->next && fast->next->next){
            fast = fast -> next -> next;
            middle = middle -> next;
        }
        ListNode* curr = middle->next;
        middle -> next = nullptr;
        while(curr != nullptr){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while(second != nullptr){
                ListNode* temp = first -> next;
                ListNode* temp1 = second -> next;
                first -> next = second;
                second -> next = temp;
                first = temp;
                second = temp1;
        }
    }
};

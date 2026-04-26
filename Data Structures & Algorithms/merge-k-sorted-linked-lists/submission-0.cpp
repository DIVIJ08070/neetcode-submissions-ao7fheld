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
        priority_queue<pair<int,ListNode*>,
        vector<pair<int,ListNode*>>,
        greater<pair<int,ListNode*>>
        > pq;
        ListNode d(0);
        ListNode* temp = &d;
        for(int i = 0; i < lists.size() ; i++){
            pq.push({lists[i]->val,lists[i]});
        }
        while(!pq.empty()){
            auto top = pq.top();
            temp -> next = top.second;
            pq.pop();
            if(top.second -> next){
                pq.push({top.second->next->val,top.second->next});
            }
            temp = temp -> next;
        }
        return d.next;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> pq;
        pq.push(p);
        pq.push(q);
        while(!pq.empty()){
            TreeNode* first = pq.front();
            pq.pop();
            TreeNode* second = pq.front();
            pq.pop();

            if(first == nullptr && second == nullptr){
                continue;
            }
            else if(first == nullptr || second == nullptr || first->val != second->val){
                return false;
            }
            pq.push(first->left);
            pq.push(second->left);
            pq.push(first->right);
            pq.push(second->right);
        }
        return true;
    }
};

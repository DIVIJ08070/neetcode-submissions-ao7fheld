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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> myq;
        vector<vector<int>> a;
        if(root != NULL){
            myq.push(root);
        }
        while(!myq.empty()){
            int l = myq.size();
            vector<int> ans;
            for(int i = 0; i < l; i++){
                TreeNode* a = myq.front();
                myq.pop();
                ans.push_back(a->val);
                if(a->right){
                    myq.push(a->right);
                }
                if(a->left){
                    myq.push(a->left);
                }
            }
            reverse(ans.begin(),ans.end());
            a.push_back(ans);
        }
        return a;
    }
};

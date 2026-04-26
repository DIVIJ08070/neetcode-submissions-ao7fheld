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
    string preOrder(TreeNode* a){
        if(a == nullptr){
            return "#";
        }
        string ans = ","+ to_string(a->val);
        ans += (preOrder(a->left));
        ans += (preOrder(a->right));

        return ans;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string fulltree = preOrder(root);
        string subtree = preOrder(subRoot);
        
        return fulltree.find(subtree) != string::npos;
    }
};

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
    stack <TreeNode*> stack;
public:
    bool isSymmetric(TreeNode* root) {
        stack.emplace(root);
    stack.emplace(root);
    while(!stack.empty())
    {
        TreeNode *t1 = stack.top();
        stack.pop();
        TreeNode *t2 = stack.top();
        stack.pop();
        if(!t1 && !t2) continue;
        if(!t1 || !t2) return false;
        if(t1->val != t2->val) return false;
        stack.emplace(t1->left);
        stack.emplace(t2->right);
        stack.emplace(t1->right);
        stack.emplace(t2->left);
    }
    return true;
    }
};
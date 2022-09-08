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
    bool recursiveCheck(TreeNode* rootLeft,TreeNode* rootRight)
    {
        if(!rootLeft && !rootRight) return true;
        else if((!rootLeft && rootRight)|| (rootLeft && !rootRight) || (rootLeft->val != rootRight->val)) return false;
        else return recursiveCheck(rootLeft->left,rootRight->right) && recursiveCheck(rootLeft->right,rootRight->left);
    }
    bool isSymmetric(TreeNode* root) {
       return recursiveCheck(root->left,root->right); 
    }
};
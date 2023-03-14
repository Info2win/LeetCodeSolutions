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
private:
    bool isValid(TreeNode* node, long leftBoundary, long rightBoundary){
        if(!node) return true;
        if((node->val > leftBoundary) && (node->val < rightBoundary))
        return (isValid(node->left, leftBoundary, node->val) && isValid(node->right, node->val,rightBoundary));
        else return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root,numeric_limits<long>::min(),numeric_limits<long>::max());
    }
};
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
    bool l = true;
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        TREE(root,root->val);
        return l;
    }
    void TREE(TreeNode* root, int a){
        if(root==NULL){
            return;
        }
        if(root->val != a){
            l = false;
            return;
        }
        TREE(root->left,a);
        TREE(root->right,a);
    }
};
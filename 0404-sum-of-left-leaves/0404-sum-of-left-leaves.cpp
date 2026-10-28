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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        sumleft(root, false);
        return sum;
    }
    void sumleft(TreeNode* root, bool l){
        if(root==NULL){
            return;
        }
        if(root->left){
            l = true;
        }
        TreeNode* node = root->left;
        if(node!= NULL && l == true && node->left == NULL && node->right==NULL){
            sum += node->val;
        }
        sumleft(root->left, true);
        sumleft(root->right, false);
    }
};
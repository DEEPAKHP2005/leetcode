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
    int sum =0;
    int sumNumbers(TreeNode* root) {
        Add(root,0);
        return sum;

    }
    void Add(TreeNode* root, int parent){
        if(root==NULL){
            return;
        }
        parent = parent * 10 + root->val;
        if(root->left==NULL && root->right==NULL){
            sum += parent;
        }
        Add(root->left, parent);
        Add(root->right, parent);
    }
};
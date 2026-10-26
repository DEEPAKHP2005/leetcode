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
    int count=0;
    int goodNodes(TreeNode* root) {
        Add(root,root->val);
        return count;
    }
    void Add(TreeNode* root, int parent){
        if(root==NULL){
            return;
        }
        parent = max(parent, root->val);
        if(root->val >= parent){
            count++;
        }
        Add(root->left, parent);
        Add(root->right, parent);
    }
};
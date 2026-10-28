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
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh = leftheight(root);
        int rh = rightheight(root);
        if(rh==lh) return (1 << lh) - 1;

        return 1 + countNodes(root->left)
         + countNodes(root->right);
    }
    int leftheight(TreeNode* cur){
            int height = 0;
            while(cur){
                height++;
                cur = cur->left;
            }
            return height;
        }
        int rightheight(TreeNode* cur){
            int height = 0;
            while(cur){
                height++;
                cur = cur->right;
            }
            return height;
        }
};
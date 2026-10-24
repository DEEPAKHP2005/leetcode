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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        int l = 0;
        while(!q.empty()){
             bool x1 = false;
             bool y1 = false;
            int s = q.size();
            l++;
            while(s){
                s--;
                TreeNode* node = q.front();
                q.pop();
                if(node->left && node->right){
                if((node->left->val == x && node->right->val == y) || (node->left->val==y && node->right->val==x)){
                    return false;
                }
                }
                if(node->val == x){
                       x1 = true;
                }
                if(node->val == y){
                       y1 = true;
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(x1==true && y1==true){
                return true;
            }
        }
        return false;
    }
};
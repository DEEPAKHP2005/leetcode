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
    bool isEvenOddTree(TreeNode* root) {
        int l=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            int n = 0;
            while(s){
                s--;
                TreeNode* node = q.front();
                q.pop();
                if(l%2==0){
                    if(node->val % 2 == 0 || (n != 0 && n >= node->val)){
                        return false;
                    }
                    else{
                        n = node->val;
                    }
                    
                }
                if(l%2!=0){
        
                    if(node->val % 2 != 0 || (n != 0 && n <= node->val)){
                        return false;
                    }
                    else{
                        n = node->val;
                    }
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
             l++;
        }
        return true;
    }
};
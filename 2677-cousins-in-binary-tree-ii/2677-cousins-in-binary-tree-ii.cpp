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
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            int sum = 0;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            }
            level.push_back(sum);
        }
        q.push(root);
        int l = 1;
         root->val = 0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                int slbSum = (node->left ? node->left->val : 0) + (node->right ? node->right->val : 0);
                if(node->left){
                    node->left->val = level[l] - slbSum;
                    q.push(node->left);
                }
                if(node->right){
                    node->right->val = level[l] - slbSum;
                    q.push(node->right);
                }
            }
            l++;
        }
        return root;
    }
};
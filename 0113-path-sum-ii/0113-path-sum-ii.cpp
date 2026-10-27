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
    vector<vector<int>> ans;
    vector<int> arr;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        path(root, targetSum);
        return ans;
    }
    void path(TreeNode* root, int sum){
        if(root==NULL){
            return;
        }
        arr.push_back(root->val);
        if(root->left==NULL && root->right==NULL && sum == root->val){
            ans.push_back(arr);
        }
        sum -= root->val;
        path(root->left, sum);
        path(root->right, sum);
        arr.pop_back();
    }
};
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
    map<int, int> mp;
    int MaxEle = INT_MIN;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        subtree(root);
        vector<int> ans;
        for(auto x : mp){
            if(x.second==MaxEle){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
    int subtree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftsum = subtree(root->left);
        int rightsum = subtree(root->right);
        int sum  = root->val + leftsum + rightsum;
        
        mp[sum]++;
        MaxEle = max(MaxEle, mp[sum]);
        return sum;
    }
};
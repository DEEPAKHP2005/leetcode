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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root = build(preorder, 0,preorder.size()-1,inorder, 0, inorder.size()-1,mp);
        return root;
    }
    TreeNode* build(vector<int>& preorder, int preStr, int preEnd, vector<int>& inorder, int inStr, int inEnd,  map<int,int>& mp){
        if(preStr > preEnd || inStr > inEnd){
            return NULL;
        }
        TreeNode* node = new TreeNode(preorder[preStr]);
        int inRoot = mp[node->val];
        int leftNums = inRoot - inStr;

        node->left = build(preorder, preStr+1,preStr+leftNums,inorder, inStr,inRoot-1,mp);
        node->right = build(preorder,preStr+leftNums+1,preEnd,inorder, inRoot+1,inEnd,mp);
        return node;
    }

};
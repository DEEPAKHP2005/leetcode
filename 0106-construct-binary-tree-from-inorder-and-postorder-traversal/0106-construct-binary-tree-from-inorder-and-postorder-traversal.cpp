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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;

        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return build(postorder, 0, postorder.size()-1,
                     inorder, 0, inorder.size()-1, mp);
    }

    TreeNode* build(vector<int>& postorder, int postStr, int postEnd,
                    vector<int>& inorder, int inStr, int inEnd,
                    map<int,int>& mp) {

        if(postStr > postEnd || inStr > inEnd) {
            return NULL;
        }

        TreeNode* node = new TreeNode(postorder[postEnd]);

        int inRoot = mp[node->val];
        int leftNums = inRoot - inStr;

        node->left = build(postorder, postStr,
                           postStr + leftNums - 1,
                           inorder, inStr, inRoot-1, mp);

        node->right = build(postorder, postStr + leftNums,
                            postEnd-1,
                            inorder, inRoot+1, inEnd, mp);

        return node;
    }
};
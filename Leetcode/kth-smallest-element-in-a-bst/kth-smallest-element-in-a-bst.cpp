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
    void inorder(TreeNode* root,vector<int> &v)
    {
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->val); //store the values of nodes in vector in sorted fashion
        inorder(root->right,v);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        return v[k-1]; //return the kth smallest element
    }
};
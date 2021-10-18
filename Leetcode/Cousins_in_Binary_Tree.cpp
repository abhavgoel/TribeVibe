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
    bool isCousins(TreeNode* root, int x, int y) 
    {
        queue<TreeNode*>q;
        TreeNode *temp;
        if(root==NULL)
         return false;
        q.push(root);
        q.push(NULL);
        bool fx=0,fy=0;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            if(temp!=NULL)
            {
                if((temp->left!=NULL && temp->right!=NULL) && (((temp->right)->val==x && (temp->left)->val==y)||((temp->right)->val==y && (temp->left)->val==x)))
             return  false;
            if(temp->val==x)
                fx=1;
            else if(temp->val==y)
                fy=1;
            if(temp->left)
             q.push(temp->left);
            if(temp->right)
             q.push(temp->right);
            }
            else
            {
                if(fx==1 && fy==1)
                 return true;
                else if(fx==1 || fy==1)
                 return false;
                else
                q.push(NULL);    
            }
        }
        return false;
    }
};

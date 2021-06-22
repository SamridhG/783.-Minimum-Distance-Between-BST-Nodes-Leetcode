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
    vector<int>A;
     void inorder(TreeNode *node)
    {
        if(node!=NULL)
        {
            inorder(node->left);
            A.push_back(node->val);
            inorder(node->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        set<int>B;
        inorder(root);
        for(int i=1;i<A.size();i++)
        {
            B.insert(A[i]-A[i-1]);
        }
        return *B.begin();
    }
};

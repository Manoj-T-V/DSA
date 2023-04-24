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
        vector<int>v;
        void it(TreeNode* root)
        {
                if(root==NULL)
                   {
                        return;
                   }
                it(root->left);
                v.push_back(root->val);
                it(root->right);
        }
    int kthSmallest(TreeNode* root, int k) {
            it(root);
            for(auto x : v)
            {
                    cout<<x;
            }
            return v[k-1];
        
    }
};
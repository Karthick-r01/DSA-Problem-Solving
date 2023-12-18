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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        store(res, root);
        sort(res.begin(), res.end());

        int i;
        for(i=0;i<res.size();i++) {
            if(k==i+1)  break;
        }

        return res[i];
    }

    void store(vector<int>& res, TreeNode* root) {
        if(root==NULL)  return;

        store(res, root->left);
        res.push_back(root->val);
        store(res, root->right);
    }
};

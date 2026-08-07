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
    int maxDepth(TreeNode* root) {
        queue <TreeNode*>q;
        int depth=0;
        if(root==NULL) return depth;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty())
        {
          vector<int>level;
          int size=q.size();
          for(int i=0;i<size;i++)
          {
              TreeNode* curr=q.front();
            q.pop();
            level.push_back(curr->val);
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
          }
ans.push_back(level);

        }
depth=ans.size();
return depth;
    }
};
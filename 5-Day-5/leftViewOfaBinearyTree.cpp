class Solution
{
public:
    void rightneed(TreeNode *node, int need, vector<int> &ans)
    {
        if (node == NULL)
        {
            return;
        }
        if (ans.size() == need)
        {
            ans.push_back(node->val);
        }
        rightneed(node->left, need + 1, ans);
        rightneed(node->right, need + 1, ans);
  
    }
    vector<int> rightSideView(TreeNode *root)
    {

        vector<int> res;
        rightneed(root, 0, res);
        return res;
    }
};
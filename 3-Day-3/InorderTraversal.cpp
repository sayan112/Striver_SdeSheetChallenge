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
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> need;
        stack<TreeNode *> st;
        while (true)
        {
            if (root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                if (st.empty())
                {
                    break;
                }
                root = st.top();
                need.push_back(root->val);
                st.pop();
                root = root->right;
            }
        }
        return need;
    }
};

see my ful note ~https: // nutritious-closet-2ba.notion.site/Inorder-Traversal-b9e08a48dde9414690c0d387fd96f24d
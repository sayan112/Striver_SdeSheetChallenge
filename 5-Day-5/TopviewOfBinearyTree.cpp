public:
// Function to return a list of nodes visible from the top view
// from left to right in Binary Tree.
vector<int> topView(Node *root)
{

    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    map<int, int> mp;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();

        Node *node = it.first;
        int need = it.second;

        if (mp.find(need) == mp.end())
        {
            mp[need] = node->data;
        }

        if (node->left != NULL)
        {
            q.push({node->left, need - 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, need + 1});
        }
    }

    for (auto elem : mp)
    {
        ans.push_back(elem.second);
    }
    return ans;
}
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        recursion(root, 0, ans);

        return ans;
    }

    void recursion(TreeNode *root, int level,
                   vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (level == ans.size())
            ans.push_back(root->val);
        recursion(root->right, level + 1, ans);
        recursion(root->left, level + 1, ans);
    }
};
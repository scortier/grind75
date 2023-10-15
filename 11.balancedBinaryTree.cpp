class Solution
{
public:
    bool ans;
    bool isBalanced(TreeNode *root)
    {
        ans = true;
        int temp = checkBalance(root);
        return ans;
    }

    int checkBalance(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int left = checkBalance(root->left);
        if (left == -1)
            return false;

        int right = checkBalance(root->right);
        if (right == -1)
            return false;

        if (abs(left - right) > 1)
            ans = false;

        return max(left, right) + 1;
    }
};
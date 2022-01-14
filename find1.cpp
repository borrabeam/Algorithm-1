#include <iostream>

using namespace std;

typedef int valueType;

struct TreeNode
{
    valueType val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(valueType val, TreeNode *left = 0, TreeNode *right = 0)
        : val(val), left(left), right(right) {}
};

void insert(TreeNode *&r, valueType x)
{
    if (!r)
    {
        r = new TreeNode(x);
    }
    else if (x < r->val)
    {
        insert(r->left, x);
    }
    else if (x > r->val)
    {
        insert(r->right, x);
    }
}

TreeNode *find(TreeNode *r, valueType x)
{
    if (!r)
    {
        return 0;
    }
    if (r->val == x)
    {
        return r;
    }
    if (r->val < x)
    {
        return find(r->right, x);
    }
    return find(r->left, x);
}

int main()
{
    TreeNode* root = 0;
    int n;
    int num;
    int x;

    cin >> n;

    for (int i=0;i<n;i++)
    {
        cin >> num;
        if (num == 1)
        {
            cin >> x;
            insert(root,x);
        }
        else if (num == 2)
        {
            cin >> x;
            if (find(root,x))
            {
                cout << "1" << endl;
            }
            else cout << "0" << endl;
        }
    }

}

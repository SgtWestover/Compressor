#ifndef TREENODE
#define TREENODE

typedef struct TreeNode
{
    char ch;
    TreeNode* zero;
    TreeNode* one;
    TreeNode(TreeNode* left = nullptr, TreeNode* right = nullptr);
    TreeNode(char c);
    bool isLeaf() const;
    bool getChar() const;
} TreeNode;

#endif
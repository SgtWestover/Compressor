#include <vector>
#include <map>
#include "TreeNode.h"

class PriorityQueue
{
public:
    int get_size();
    TreeNode* peek();
    void enqueue(TreeNode* node, int priority);
    TreeNode* dequeue();
private:
    int num;
    std::map<TreeNode*, int> queue;
};
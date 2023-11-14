#ifndef HUFFMAN
#define HUFFMAN

#include <iostream>
#include <string>
#include <map>
#include <set>
#include "TreeNode.h"
#include "PriorityQueue.h"


PriorityQueue readText(std::string str);

TreeNode* buildTree(std::map<char, int> textMap);



#endif
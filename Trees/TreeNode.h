#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode{
    public :
    T data;
    vector<TreeNode*> childNodes;

    TreeNode(T data){
        this->data = data;
    }
};
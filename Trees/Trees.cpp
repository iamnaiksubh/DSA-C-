#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode{
    public :
    T data;
    vector<TreeNode*> childNodes;

    TreeNode(int data){
        this->data = data;
    }
};


// Taking input 
TreeNode<int>* takeInput(){

    int rootData;
    cout << "Enter data : ";
    cin >> rootData;
    
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout <<  "Enter number of child of " << rootData << " : ";
    cin >> n;

    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->childNodes.push_back(child);
    }

    return root;
}

// Printing the data of tree 
void print(TreeNode<int>* root){
    if(root == NULL)
        return;
    
    cout << root->data << ": ";

    for(int i=0;i<root->childNodes.size();i++)
        cout << root->childNodes[i]->data << " ";

    cout << endl;

    for(int i=0;i<root->childNodes.size();i++)
        print(root->childNodes[i]);
}

int main(){
    TreeNode<int>* root = takeInput();
    print(root);
}
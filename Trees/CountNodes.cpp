 #include <bits/stdc++.h>
 #include "TreeNode.h"
using namespace std;


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

int countNodes(TreeNode<int>* root){
    int cnt = 1;
    for(int i=0;i<root->childNodes.size();i++){
        cnt += countNodes(root->childNodes[i]);
    }
    return cnt;
}

int main(){
    TreeNode<int>* root = takeInput();
    cout << "Number of Nodes are : " << countNodes(root); 
}
#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

// Taking input levelwise
TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter root data :";
    cin >> rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* node = q.front();
        int n;
        cout << "Enter No. of childs of " << node->data << ": ";
        cin >> n;

        for(int i=0;i<n;i++){
            int val;
            cin >> val;
            TreeNode<int>* child = new TreeNode<int>(val);
            node->childNodes.push_back(child);
            q.push(child);
        }
        q.pop();
    }

    return root;

}

// Level order wise 
void printLevelWise(TreeNode<int>* root) {
    
    if(root == NULL)
        return;
    
	queue<TreeNode<int>*> q;
    q.push(root);
    
    
    while(!q.empty()){
        TreeNode<int>* node = q.front();
        q.pop();
        cout << node->data << ":";
        int childs = node->childNodes.size();
        
        for(int i=0;i<childs;i++){
            cout << node->childNodes[i]->data;
            if(i != childs-1)
                cout << ",";
            q.push(node->childNodes[i]);
        }
        cout << endl;
    }
}

int main(){
    TreeNode<int>* root = takeInput();
    printLevelWise(root);

}
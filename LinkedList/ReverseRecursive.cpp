#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* reverseR(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    Node* node =reverseR(head->next);
    head->next->next = head;
    head->next = NULL;
    return node;
}

int main(){
    
    Node* head = new Node(1);
    Node* temp = head;

    for(int i=2;i<5;i++){
        temp->next = new Node(i); 
        temp = temp->next;
    }
    head = reverseR(head);

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
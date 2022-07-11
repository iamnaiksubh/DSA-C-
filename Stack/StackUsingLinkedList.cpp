//Implementation of stack using LinkedList
#include<bits/stdc++.h>
using namespace std;
 
class Node {
    public :
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Stack {
	
   Node *head;
   int size;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }


    int getSize() {
        return size;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int element) {
        Node* nn = new Node(element);
        size++;
        
        if(head == NULL){
            head = nn;
        }
        
        nn->next = head;
        head = nn;
    }

    int pop() {
        if(head == NULL)
            return -1;
        size--;
        int ele = head->data;
        head = head->next;
        
        if(size == 0)
            head = NULL;
        return ele;
    }

    int top() {
        if(head == NULL)
            return -1;
        return head->data;
    }
};

int main(){
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }

    return 0;
}
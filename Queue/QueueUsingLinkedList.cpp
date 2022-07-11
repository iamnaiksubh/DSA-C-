//Implementating Queue Using LinkedList

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


class Queue {
	Node* head,* tail;
    int size = 0;
   public:
    Queue() {
        head = tail = NULL;
        size = 0;
	}
	

	int getSize() {
        return size;
	}

    bool isEmpty() {
        return size == 0;
	}

    void enqueue(int data) {
        Node* nn = new Node(data);
        if(size == 0){
            head = tail = nn;
            size++;
            return;
        }
        size++;
        tail->next = nn;
        tail = nn;
	}

    int dequeue() {
        if(size == 0)
            return -1;
        
        size--;
        int k = head->data;
        head = head->next;
        
        return k;
    }

    int front() {
        if(size == 0)
            return -1;
        return head->data;
    }
};

int main() {
    Queue q;

    int t;
    cin >> t;

    while (t--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << q.dequeue() << "\n";
                break;
            case 3:
                cout << q.front() << "\n";
                break;
            case 4:
                cout << q.getSize() << "\n";
                break;
            default:
                cout << ((q.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}
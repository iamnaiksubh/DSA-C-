//Implementation of Queue using array
// All operation are of O(1)
#include<bits/stdc++.h>
using namespace std;
int front = -1, rear = -1;
int const N = 1000;
int que[N];

void enqueue(int n){
    if(rear == N-1){
        cout << "Queue is Full\n";
        return;
    }
    que[++rear] = n;
}

void dequeue(){
    if(front == rear){
        cout << "Queue is Empty\n";
        return;
    }
    front++;
}

int frontQue(){
    if(front == rear){
        cout << "Queue is Empty\n";
        return 0;
    }
    
    return que[front+1];
}

bool isEmpty(){
    if(front == rear)
        return true;
    return false;
}

int size(){
    return rear - front;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s == "enqueue"){
            int n;
            cin >> n;
            enqueue(n);
        }
        else if(s == "dequeue")
            dequeue();
        else if(s == "front")
            cout << frontQue() << endl;
        else if(s == "isEmpty")
            cout << (isEmpty() ? "Empty\n" : "Not Empty\n");
        else if(s == "size")
            cout << size();
    }
    return 0;
}
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
    front++;
}

int front(){
    if(front >= rear)
    return que[front+1];
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
            cout << front() << endl;
        else if(s == "isEmpty")
            cout << (isEmpty() ? "Empty\n" : "Not Empty\n");
        else if(s == "size")
            cout << size();
    }
    return 0;
}
// Implementing Stack using array
// All operation are of O(1)

#include<bits/stdc++.h>
using namespace std;
int const N = 1000;
int st[N];
int top = -1;

void push(int n){
    if(top == N-1){
        cout << "Stack Overflow\n";
        return;
    }
    st[++top] = n;
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return;
    }
    --top;
}

int topElement(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return 0;
    }
    return st[top];
}

bool isEmpty(){
    if(top == -1)
        return true;
    return false;
}

int size(){
    if(top == -1)
    return 0;
    return top+1;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s == "push"){
            int n;
            cin >> n;
            push(n);
        }
        else if(s == "pop")
            pop();
        else if(s == "top")
            cout << topElement() << endl;
        else if(s == "isEmpty")
            cout << (isEmpty() ? "Empty\n" : "Not Empty\n");
        else if(s == "size")
            cout << size();
    }
    return 0;
}
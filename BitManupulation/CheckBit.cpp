// Check the ith bit is set or not
#include<bits/stdc++.h>
using namespace std;

bool checkbit(int n, int i){
    return (n&(1<<i));
}

int main(){
    int n,i;
    cin >> n >> i;

    cout << ( checkbit(n,i) ? "ith bit is set" : "ith bit is not set" );
    return 0;
}
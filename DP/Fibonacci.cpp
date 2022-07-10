// Nth Fibonacci No.
// 0 1 1 2 3 5 8

#include<bits/stdc++.h>
using namespace std;

// Recursion (TC : O(2^N) , SC : O(N) call stack space)
int fabR(int n){
    if(n <= 1)
        return n;
    
    return fabR(n-1) + fabR(n-2);
}

// Memoization (TC : O(N) , SC : O(N))
int fabM(int n, vector<int> &memo){
    if(n <= 1)
        return n;
    
    if(memo[n] != -1)
        return memo[n];

    return memo[n] = fabM(n-1 , memo) + fabM(n-2 , memo);
}

int main(){
    int n;
    cin >> n;

    vector<int> memo(n+1, -1);
    vector<int> dp(3, -1);

    cout << "Recursion : " << fabR(n) << endl;
    cout << "Memoization : " << fabM(n,memo) << endl;

    // Tabulation (TC : O(N) , SC : O(1))
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++)
        dp[i%3] = dp[(i-1)%3] + dp[(i-2)%3];

    cout << "Tabulation : " << dp[n%3] << endl;

    return 0;
}
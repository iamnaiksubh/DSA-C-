#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int ar[], int n, int k, int sum, int idx = 0){
    if(idx == n)
        return (sum == k);

    return (subsetsum(ar, n, k, sum + ar[idx], idx+1) || subsetsum(ar, n, k, sum, idx+1) ); 
}

int main(){
    int n;
    cin >> n;

    int ar[n];

    for(int i=0;i<n;i++){
        cin >> ar[i];
    }

    int k;
    cin >> k;

    cout << (subsetsum(ar, n, k, 0) ? "True" : "False");
    
    return 0;
}
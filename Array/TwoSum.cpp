#include<bits/stdc++.h>
using namespace std;

bool sumIsK(int ar[], int n, int k){
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
        mp[ar[i]]++;
    
    for(int i=0;i<n;i++){
        int b = k - ar[i];
 
        if(mp.find(b) != mp.end())
            return true;
    }

    return false;
}

int main(){
    int n;
    cin >> n;

    int ar[n];

    for(int i=0;i<n;i++)
        cin >> ar[i];
    
    int k;
    cin >> k;

    cout << (sumIsK(ar, n, k) ? "True" : "False" );;
    return 0;
}
// Count Number Of set bits
#include<bits/stdc++.h>
using namespace std;



int countSetBits(int n){
    int no_of_setbits = 0;

    // checking all 32 bits
    // TC : O(32) SC : O(1)
    // for(int i=0;i<32;i++){
    //     if(n&(1<<i))
    //         no_of_setbits++;
    // }

    // it unset the last set bit
    // TC : O(no. of set bits in n) SC : O(1)
    while(n != 0){
        n = n&(n-1);
        no_of_setbits++;
    }

    return no_of_setbits;
}

int main(){
    int n;
    cin >> n;

    cout << "Number of set bits : " << countSetBits(n);
    return 0;
}
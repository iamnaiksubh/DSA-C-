// Number of Divisor less than N

#include<bits/stdc++.h>
using namespace std;

int noOfDivisor(int n){
    int divisor = 0;

    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            if(n/i == i)
                divisor++;
            else
                divisor += 2;
        }
    }

    return divisor;
}

int main(){
    int N;
    cin >> N;

    cout << "Number of Divisor : " << noOfDivisor(N);
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// We Are Going to use Recursion to Solve this Power Question (M)n
// First One is This
int pow1(int m, int n){
    if (n == 0){
        return 1;
    }else{
        return pow1(m, n-1)*m;
    }
}



// Second One is this
int pow2(int m, int n){
    if(n == 0){
        return 1;
    }

    if(n % 2 == 0){
        return pow2(m*m, n/2);
    }else{
        return m*pow2(m*m, (n-1) / 2);
    }
}


int main(){
    // We Are Going To Calculate the Power Of (m)n
    int m = 2;
    int n = 5;

    cout <<pow2(m, n) <<endl;

    return 0;
}
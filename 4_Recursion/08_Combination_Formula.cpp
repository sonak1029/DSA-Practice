#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }

}

int nCr(int n, int r){
    int numerator, Denominator;
    if (r > n) return 0; // Base case: nCr is invalid if r > n
    numerator = fact(n);
    Denominator = fact(r) * fact(n-r);

    return numerator/Denominator;

}


// Now I am Using Recursion TO Solve This question
int NCR(int n, int r){

    if(n==r || r==0){
        return 1;
    }else{
        return NCR(n-1, r-1) + NCR(n-1, r);
    }

}


int main(){
    // Without Using Recursion to solve this question
    // cout <<nCr(7,2) <<endl;

    // Using Recursion 
    cout <<NCR(7, 2) <<endl;
    return 0;
}

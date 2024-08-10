#include<bits/stdc++.h>
using namespace std;

// Fibonacci Series
// First Part
// This Excessive Recursion is hold More Time complexcity
// O(2 n Squre)
int fib(int n){
    if(n <= 1){
        return n;
    }else{
        return fib(n-2) + fib(n-1);
    }
}


// Second Part
// This Function is Hold Less Time
// O(n)
int fib1(int n){
    int term_0 = 0, term_1 = 1, sum;
    
    if(n <= 1){
        return n;
    }

    for(int i=2; i<=n; i++){
        sum = term_0 + term_1;
        term_0 = term_1;
        term_1 = sum;
    }

    return sum;

}


// This Memorization Recursion is the More Optimise Then The Excessive Recursion
int f[10];

void initialize(){
    for(int i = 0; i < 10; i++) {
        f[i] = -1;
    }
}

int fib2(int n){

    if(n <= 1){
        f[n] = n;
        return n;
    }else{
        if(f[n-2] == -1){
            f[n-2] = fib2(n-2);
        }

        if(f[n-1] == -1){
            f[n-1] = fib2(n-1);
        }

        return f[n-2] + f[n-1];
        
    }
}



int main(){
    int n = 7;  // Change this to compute the Fibonacci number for any other value of n

    initialize();  // Initialize the array f before calling fib2

    cout << "Fibonacci of " << n << " is: " << fib2(n) << endl;
    return 0;
}
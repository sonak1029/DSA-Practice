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
    
    // if(n <= 1){
    //     return n;
    // }

    for(int i=2; i<=n; i++){
        sum = term_0 + term_1;
        term_0 = term_1;
        term_1 = sum;
    }

    return sum;

}


// This Memorization Recursion is the More Optimise Then The Excessive Recursion
int arr[20];

void initialize(){
    for(int i = 0; i < 20; i++) {
        arr[i] = -1;
    }
}

int m_Fib2(int n){ // n=7
    if (n >= 10) { // Handle overflow
        return -1;
    }

    if(n <= 1){ // 
        arr[n] = n;
        return n;
    }else{
        if(arr[n-2] == -1){ // f[7-2] = f[5] == -1
            arr[n-2] = m_Fib2(n-2);
        }

        if(arr[n-1] == -1){
            arr[n-1] = m_Fib2(n-1);
        }

        arr[n] = arr[n-2] + arr[n-1];

        return arr[n-2] + arr[n-1];
        
    }
}



int main(){
    int n = 6;  // Change this to compute the Fibonacci number for any other value of n

    initialize();  // Initialize the array f before calling fib2

    cout <<"Fibonacci Series of " <<n <<" is : " <<fib(n) <<endl;

    cout << "Using Memoization The Fibonacci Series of " << n << " is : " << m_Fib2(n) << endl;

    cout <<"using Loop The Fibnacci Series Of " <<n <<" is : " <<fib1(n) <<endl;
    return 0;
}
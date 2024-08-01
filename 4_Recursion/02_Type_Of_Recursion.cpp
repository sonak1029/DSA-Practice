#include<bits/stdc++.h>
using namespace std;

// Types of Recursion
// * Tail Recursion
// * Head Recursion
// * Tree Recursion
// * Indirect Recursion
// * Nested Recursion

// Tail Recursion
void fun1(int n){
    // Both condition Hold same Time Complexcity
      
    // O(n)
    if(n > 0){
        cout <<n <<endl;
        fun1(n-1);
    }

    // This loop while reduce the space complexcity
    // O(1)
    while(n > 0){
        cout <<n <<endl;
        n--;
    }
}


// Tail Recursion
void fun2(int n){
    // Both condition Hold same Time Complexcity
      
    // O(n)
    // if(n > 0){
    //     fun2(n-1);
    //     cout <<n <<endl;
    // }

    // This loop while reduce the space complexcity
    // O(1)
    while(n > 0){
        n--;
        cout <<n <<endl;
    }
}

int main(){
    int x = 5;
    // fun1(x);
    fun2(x);

    return 0;
}
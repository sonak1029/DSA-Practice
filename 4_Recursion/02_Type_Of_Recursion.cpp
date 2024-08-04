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


// Head Recursion
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


// liner Recursion
void fun3(int n){
    // When a Function Call itself Only One Time That is Called Liner Recursion
    // This condition Hold O(n) Time Complexcity
    if(n > 0){
        cout <<n <<" ";
        fun3(n-1);
        cout <<n;
    }
    cout <<endl;
}



// Tree Recursion
void fun4(int n){
    // When a Function Call itself More Then One Time That is Called Tree Recursion
    // This condition Hold O(n) Time Complexcity
    if(n > 0){
        cout <<n <<" ";
        fun4(n-1);
        fun4(n-1);
    }

}


// Recursion Cycle
// Call the Prototype of FunB(int n)
void funB(int n);

void funA(int n){
    if(n > 0){
        cout <<n <<" ";
        funB(n-1);
    }
}


void funB(int n){
    if(n > 1){
        cout <<n <<endl;
        funA(n/2);
    }
}


// Nested Recursion

int fun5(int n){
    if(n > 100){
        return n-10;
    }else{
        return fun5(fun5(n+11));
    }
}


int main(){
    int x = 95;
    // fun1(x);
    // fun2(x);
    // fun3(x);
    // fun4(x);
    // funA(x);
    cout <<fun5(x) <<endl;

    return 0;
}
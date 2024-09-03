#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int A[5] = {2, 4, 6, 8, 10};
    int *p;

    // This Methode We Have To Use in C Programming language
    // p = (int*) malloc(5*sizeof(int));

    // But In C++ we Do This
    p = new int[5];

    // Assign value in array
    p[0] = 3;
    p[1] = 8;
    p[2] = 1;
    p[3] = 6;
    p[4] = 10;

    // Pirnt value
    for(int i=0; i<5; i++){
        // cout <<A[i] <<" ";
        // printf("%d ", A[i]);
    }

    // cout<<endl;

    // Print The Dynamic Value using pointer
    for(int i=0; i<5; i++){
        // cout <<p[i] <<" ";
        // printf("%d ", p[i]);
    }

    // cout <<endl;

    // How to Increase Array Size
    int *ptr, *q;

    ptr = new int[5];

    ptr[0] = 3;
    ptr[1] = 2;
    ptr[2] = 9;
    ptr[3] = 6;
    ptr[4] = 1;
    q = new int[10];

    for(int i=0; i<10; i++){
        q[i] = ptr[i];
    }

    free(p);

    // print value
    for(int i=0; i<5; i++){
        cout <<q[i] <<" ";
    }

    cout <<endl;

    return 0;
}
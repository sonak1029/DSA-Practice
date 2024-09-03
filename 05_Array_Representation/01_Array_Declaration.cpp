#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]; // it will give me some Garbage value
    int B[5] = {2, 4, 6, 8, 10}; // it will give me all the value
    int C[10] = {2, 5}; // it will give me only index 0 and index 1 ke value 2, 5 and all value should Zero
    int D[5] = {0}; // it will give me zero all value should zero
    int E[] = {1, 2, 3, 4, 5, 6}; // it will give me all value but the size is depand on user

    for(int i=0; i<5; i++){
        cout <<E[i] <<endl;
    }
    

    return 0;
}
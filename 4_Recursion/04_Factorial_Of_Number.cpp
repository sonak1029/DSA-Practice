#include<bits/stdc++.h>
using namespace std;

// In This Code We Are Going To Use Recursive Function
int fact1(int n){
    if(n == 0){
        return 1;
    }else{
        return fact1(n-1)*n;
    }
}



// In This Part We Are Going To Use Loop To Solve This Question
int fact2(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f = f*i;
    }

    return f;
}



int main(){
    int factorial = 0;

    cout <<fact1(factorial) <<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// This One is The First Option To Solve This Question

int sum_Of_Digits(int n){
    // Base Case : IF Number is 0 return 0
    if(n == 0){
        return 0;
    }else{
        return (n % 10) + sum_Of_Digits(n / 10);
    }
}


// This One The Second Option to Solve this Question
int sum_Of_Digits1(int n){
    // Base Case is : n != 0
    int sum = 0, remender;

    while(n != 0){
        remender = n % 10;
        sum = sum + remender;
        n = n / 10;
    }

    return sum;

}



int  main(){
    // Using Recursion To Solve This Question
    cout <<sum_Of_Digits(4321) <<endl;

    // Using Loop To Solve This Question
    cout <<sum_Of_Digits1(4321) <<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


// Sum of Digits:

// Write a recursive function to find the sum of the digits of a given number.
// Example: sumOfDigits(123) should return 6.


// This Condition is Based on Recursive Call
// The Time complexcity Of this code is O(n) And Space Complexcity is O(n)
int sum1(int n){
    if(n == 0){
        return 0;
    }else{
        return sum1(n-1)+n;
    }
}


// This Condition is Based On Formula
// The Time Complexcity of this Code is  And Space Complexcity is 
int sum2(int n){
    return n*(n+1) / 2;
}


// This Condition is Based On Formula
// The Time Complexcity of this Code is  And Space Complexcity is 
int sum3(int n){
    int i, s = 0;

    for(i=1; i<=n; i++){
        s = s + i;
    }

    return s;
}



int main(){
    int first_N_Natural_Number = 5;
    // cout <<sum1(first_N_Natural_Number) <<endl;
    // cout <<sum2(first_N_Natural_Number) <<endl;
    cout <<sum3(first_N_Natural_Number) <<endl;
    return 0;
}
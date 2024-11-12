#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[15];
    int size;
    int length;
};

// Sum of Digits:

// Write a recursive function to find the sum of the digits of a given number.
// Example: sumOfDigits(123) should return 6.


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


// Sum Of Array Element
int Sum_Of_Array(struct Array *arr, int n){
    // Base case: if n is 0, the sum is 0
    if(n <= 0){
        return 0;
    }
    // Recursive case: last element + sum of remaining elements
    return arr->A[n-1] + Sum_Of_Array(arr, n-1);
}



int  main(){
    struct Array arr = {{8, 3, 9, 15, 6, 1, 5}, 15, 7};

    // Using Recursion To Solve Sum Of Digits Question
    cout <<sum_Of_Digits(4321) <<endl;

    // Using Loop To Solve Sum of Digits Question
    cout <<sum_Of_Digits1(4321) <<endl;

    // Using Recursiong To Solve Sum Of Array Question
    cout << "Sum of array elements: " << Sum_Of_Array(&arr, arr.length) << endl;

    return 0;
}
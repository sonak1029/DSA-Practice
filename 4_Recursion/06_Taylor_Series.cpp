#include<bits/stdc++.h>
using namespace std;

// This Function is Based On Taylor Series With the Help of Recursion
// This Function will not Reduce the Time Complexcity And The Time Complexcity of This Code IS
// O(n squre) = Quadratic

double taylor_Series(int x, int n){

    static double p = 1, f = 1;
    double r;

    if(n == 0){
        return 1;
    }else{
        r = taylor_Series(x, n-1);
        p = p * x;
        f = f * n;
    }

    return r + p/f;
    
}


// The Name Of the Taylor Series is Horner's Rule
// Now This Function Will Reduce the Time complexcity 
// O(n) = Linear
double taylor_Horners_Rule(int x, int n){
    static double s = 1;

    if(n == 0){
        return s;
    }else{
        s = 1 + s*x/n;
    }

    return taylor_Horners_Rule(x, n-1);
}


// Now we Are going to solve the Question using loop
double taylor_Series_Using_Loop(int x, int n){
    double s = 1;
    
    for(; n>0; n--){
        s = 1 + s*x/n;
    }

    return s;

}

int main(){
    // Taylor Series
    cout <<taylor_Series(4, 11) <<endl;

    // Taylor series using Horner's Rule
    cout <<taylor_Horners_Rule(4, 11) <<endl;

    // Taylor Series Using Loop
    cout <<taylor_Series_Using_Loop(4, 11) <<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// This Function is Based On Taylor Series With the Help of Recursion
// This Function will not Reduce the Time Complexcity And The Time Complexcity of This Code IS
// O(n squre) = Quadratic

double e(int x, int n){

    static double p = 1, f = 1;
    double r;

    if(n == 0){
        return 1;
    }else{
        r = e(x, n-1);
        p = p * x;
        f = f * n;
    }

    return r + p/f;
    
}


// The Name Of the Taylor Series is Horner's Rule
// Now This Function Will Reduce the Time complexcity 
// O(n) = Linear
double e1(int x, int n){
    static double s = 1;

    if(n == 0){
        return s;
    }else{
        s = 1 + x*s/n;
    }

    return e1(x, n-1);
}


// Now we Are going to solve the Question using loop
double e2(int x, int n){
    double s = 1;
    
    for(; n>0; n--){
        s = 1 + x*s/n;
    }

    return s;

}

int main(){
    // Taylor Series Question
    cout <<e2(4, 10) <<endl;
    return 0;
}
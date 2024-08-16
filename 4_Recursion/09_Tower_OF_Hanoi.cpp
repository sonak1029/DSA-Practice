#include<bits/stdc++.h>
using namespace std;

// This Problem Name is Tower OF Hanoi
void TOH(int N, int A, int B, int C){

    // Put The Conditon
    if(N > 0){
        TOH(N-1, A,C,B);
        cout <<"Move For " <<A <<" TO " <<C <<endl;
        TOH(N-1, B,A,C);
    }

}


int main(){
    TOH(3, 1, 2, 3);
    return 0;
}
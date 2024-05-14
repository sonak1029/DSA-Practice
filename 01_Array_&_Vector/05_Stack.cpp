#include<iostream>
#include<stack>

using namespace std;


void printElementOfStack(stack<char> s){

    while(!s.empty()){
        cout <<s.top() <<" ";
        s.pop();
    }cout <<endl;
    

}



int main(){
    stack<char> s;

    // How to insert value in stack
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');

    // How empty() function work if stack is empty they return 1 and if stack is not empty they return 0;
    cout <<s.empty() <<endl;

    // Now what is the size() of Stack
    cout <<s.size() <<endl;

    // Print
    printElementOfStack(s);

    // how to remove frist element in stack
    s.pop();

    printElementOfStack(s);

    // How to print
    cout <<s.top() <<" ";

    return 0;
}
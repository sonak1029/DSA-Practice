#include<iostream>
#include<queue>

using namespace std;


void showQueue(queue<char> q){

    while(! q.empty()){
        cout <<q.front() <<" ";
        q.pop();
    }cout <<endl;

}



int main(){
    queue<char> q;
    q.push('A');
    q.push('B');
    q.push('C');
    q.push('D');
    q.push('E');

    cout <<q.size() <<endl;

    // Now how to print the value of Queue
    showQueue(q); 

    q.pop();

    showQueue(q);

    // now we are going to print the frist value and last value in queue
    cout <<"Frist value is : " <<q.front() <<endl;
    cout <<"last value is : " <<q.back() <<endl;

    q.push('A');
    showQueue(q);


    return 0;
}
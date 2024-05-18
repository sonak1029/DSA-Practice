#include<iostream>
#include<list>

using namespace std;


void printList(list<int> l){

    for(auto i: l){
        cout <<i <<" ";
    }cout <<endl;

}


int main(){

    list<int> l;

    // What is the size of list
    cout <<l.size() <<endl;

    // Now how to insert a value in list
    l.push_back(9);
    l.push_back(1);
    l.push_back(4);
    l.push_back(8);
    l.push_back(3);
    l.push_back(7);

    // Once again we check the size
    cout <<l.size() <<endl;

    // How to print the value of list
    printList(l);

    // How to remove the last element in list
    l.pop_back();

    // print
    printList(l);

    // How to print the frist element in list
    cout <<"Frist is : " <<l.front() <<endl;
    // How to print the last element in list
    cout <<"Last is : " <<l.back() <<endl;

    // Now how to clear() my list
    // l.clear();

    // And check list is empty() or not
    cout <<"Empty or not : " <<l.empty() <<endl;

    // How to remove frist element in list
    l.erase(l.begin());
    printList(l);


    return 0;
}
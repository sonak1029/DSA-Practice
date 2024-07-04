#include<iostream>
#include<list>

using namespace std;


void printList(list<int> l){

    for(auto i: l){
        cout <<i <<" ";
    }cout <<endl;

}


int main(){

    // list<int> l{12, 25, 34, 8};

    // Now how to print the value 
    // printList(l);


    // Now how to print table
    // list<int> table1, table2;

    // for(int i=1; i<=5; i++){
    //     table1.push_back(i * 2);
    //     table2.push_back(i * 3);
    // }
    
    // print the table
    // printList(table1);
    // printList(table2);

    // How to print the frist and last value in table1 and table2
    // cout <<"The Frist value of table1 is : " <<table1.front() <<endl;
    // cout <<"The Last value of tabel2 is : " <<table2.back() <<endl;

    // Remove Frist value in table1
    // table1.pop_front();
    // Print value
    // printList(table1);

    // Remove Last value in table2
    // table2.pop_back();

    // Print value
    // printList(table2);

    // How to reverse the table1
    // table1.reverse();

    // print value
    // printList(table1);

    // Now how to sort in decresing order
    // table1.sort();
    // print value
    // printList(table1);


    // Now we are going to use assign() Function to Insert multiple value in list
    list<int> s;

    // using assign() to insert multiple numbers
    // creates 3 occurrences of "2"
    s.assign(3, 2);
    // Print value
    printList(s);

    
    // initializing list iterator to beginning
    list<int>::iterator it = s.begin();

    // iterator to point to 3rd position
    advance(it, 2);

    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position
    s.insert(it, 5);
    printList(s);

    cout <<s.size() <<endl;


    return 0;
}
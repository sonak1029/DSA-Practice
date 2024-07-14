#include<bits/stdc++.h>

using namespace std;


void printMap(map<int , string> &p){

    cout <<"Size : " <<p.size() <<endl;

    for(auto &x : p){
        cout <<x.first <<" " <<x.second <<endl;
    }cout <<endl;

}



int main(){
    map<int, string> m;
    m[1] = "Sonak";
    m[4] = "Rupa";
    m[6] = "Mohan";
    m[3] = "Vishu";
    m.insert({2, "Amit"});

    m[5];

    printMap(m);

    m.erase(3);

    printMap(m);

    // Rool_No weight of student
    // map<long long int, long long int> person;

    // // How to insert a value in map this is frist option
    // person.insert(pair<int, int>(1, 46));

    // // secodn option is
    // person.insert({2, 51});
    // person.insert({3, 84});
    // person.insert({4, 50});
    // person.insert({5, 66});

    // // How to print the value
    // printMap(person);
    // // for(auto itr = person.begin(); itr!=person.end(); itr++){
    // //     cout <<itr->first <<" " <<itr->second <<endl;
    // // }

    // // How to axis frist value in map .begin() ---> return iterator
    // auto v = person.begin();
    // cout <<"By v Iterator : " <<v->first <<" " <<v->second <<endl;

    // // How to axis last value in map .end() ----> return iterator
    // // auto a = person.end();
    // // cout <<a->first <<" " <<a->second <<endl;

    // // check max_size()
    // // cout <<person.max_size() <<endl;

    // // Hwo to erase() a particular data in map but this is frist methode
    // // auto i = person.find(3);
    // // person.erase(i);
    // // printMap(person);

    // // Now second option is
    // // person.erase(5);
    // // printMap(person);

    // // Now we are using empty() function whether map is empty or not
    // // 0 --> map is not empty
    // // 1 --> map is empty
    // cout <<"Map is empty or not : " <<person.empty() <<endl;

    return 0;
}
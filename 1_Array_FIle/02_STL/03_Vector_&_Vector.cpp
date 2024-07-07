#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    
    cout << "Comparing {" << a.first << ", " << a.second << "} and {" << b.first << ", " << b.second << "} -> ";
    bool result = a.first == b.first ? a.second < b.second : a.first < b.first;
    cout << (result ? "true" : "false") << endl;
    return result;

}

int main(){
    vector<pair<int, int> > v = {
        {3, 4},
        {2, 3},
        {3, 7},
        {1, 5},
        {3, 4}
    };

    sort(v.begin(), v.end(), cmp);

    for(auto x : v){
        cout <<x.first <<" " <<x.second <<endl;
    }
    
    return 0;
}
/*

## Ways to declare the string : 
    1. string str; 

# It have iterator too.

## Imp Methods: 
    push_back(g)
    getline()
    pop_back()
    length()

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    s.push_back('a');
    cout<<"push back: "<<s<<endl;

    s.pop_back();
    cout<<"pop back: "<<s<<endl;

    cout<<"length: "<<s.length()<<endl;

    cout<<"getline: ";
    getline(cin,s);
    cout<<endl;

    cout<<"iterator: ";
    for(auto it = s.begin(); it != s.end(); it++) cout<<*it<<" ";

    return 0;
}
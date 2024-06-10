/*

## Ways to declare the vector :
    1. vector<dataType> vectorName;
    2. vector<dataType> name({ value1, value2, value3 ....}); 
    3. vector<dataType> name(size, value);
    4. vector<dataType> name(other_vec);

# It have iterator too. 

## Imp Methods
    push_back() 
    pop_back() 
    size() 
    empty() 
    insert() 
    erase() 
    clear() 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vector<int> temp({2,15,16,68});
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout<<"push back: ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    vec.pop_back();
    cout<<"pop back: ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    cout<<"size: "<<vec.size()<<endl;

    cout<<"empty: "<<vec.empty()<<endl;

    vec.erase(vec.begin());
    cout<<"erase(vec.begin()): ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    vec.erase(vec.begin(),vec.end());
    cout<<"erase(vec.begin(),vec.end()): ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    vec.insert(vec.begin(),temp.begin(),temp.end());
    cout<<"insert: ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    vec.clear();
    cout<<"clear: ";
    for(auto v : vec) cout<<v<<" ";
    cout<<endl;

    return 0;
}
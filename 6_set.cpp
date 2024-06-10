/*

Types of sets : 
    1. Set. 
    2. Unordered set. 
    3. Multi set. 

1. Set :
# Ways to declare the set:
    1. set<int> val; 
    2. set<int> val = {val1,val2,….}; 
    3. set<int, greater<int>> val; 

## It have iterators too.

## Imp Methods:
    insert(val)
    size()
    empty()
    erase(val) , erase(start,end) //range
    lower_bound(val) , upper_bound(val)
    clear()
    find(val)
    count()

2. Unordered set:
# Ways to declare the unordered set:
    1. unordered_set<int> name;
    2. unordered_set<int> name = {val1,val2,….};

## It have iterators too.

## Imp Methods:
    size()
    empty()
    find()
    insert()
    erase()
    count()
    clear()

3. MultiSet:
# Ways to declare the multiset:
    1. multiset<int> name;
    2. multiset<int> name = {val1,val2,….};
    3. multiset<int,greater<int>> name;

## It have operator too.

## Imp Methods:
    insert()
    clear()
    erase()
    size()
    empty()
    upper_bound()
    lower_bound()
    find()

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //set
    {
    set<int> a;
    a.insert(15);
    a.insert(75);
    a.insert(85);
    a.insert(9);
    a.insert(1);
    a.insert(5);

    cout<<"insert(foreach): ";
    for(int n: a) cout<<n<<" ";
    cout<<endl;

    cout<<"insert(iterator): ";
    for(auto i = a.begin();i!=a.end();i++) cout<<*i<<" ";
    cout<<endl;

    cout<<"size: "<<a.size()<<endl;
    cout<<"empty: "<<a.empty()<<endl;
    //cout<<"erase(val): "<<a.erase(75)<<endl;

    cout<<"erase: ";
    a.erase(a.begin(),a.find(75));
    for(auto i = a.begin();i!=a.end();i++) cout<<*i<<" ";
    cout<<endl;

    a.clear();
    cout<<"clear: ";
    for(auto i = a.begin();i!=a.end();i++) cout<<*i<<" ";
    cout<<endl;

    a = {1,5,8,9,12};
    cout<<"insert: ";
    for(auto i = a.begin();i!=a.end();i++) cout<<*i<<" ";
    cout<<endl;

    cout<<"count: "<<a.count(8)<<endl;
    cout<<"lower bound: "<<*a.lower_bound(11)<<endl;
    cout<<"upper bound: "<<*a.upper_bound(11)<<endl;
    }

    //unordered_set
    {

    cout<<"----------------------------------------"<<endl;;
    unordered_set<int> s{1,2,3,4,5,6,1,1,2};

    cout<<"direct insert: ";
    for(auto n : s) cout<<n<<" ";
    cout<<endl;

    cout<<"insert: ";
    s.insert(15);
    for(auto it=s.begin();it!=s.end();it++) cout<<*it<<" ";
    cout<<endl;

    cout<<"size: "<<s.size()<<endl;
    cout<<"empty: "<<s.empty()<<endl;
    cout<<"count: "<<s.count(15)<<endl;
    cout<<"find: "<<*s.find(15)<<endl;
    s.erase(s.begin());
    s.erase(s.begin(),s.end());
    s.clear();
    
    }

    // Multiset
    {
        cout<<"-----------------------------------------------"<<endl;
    
    multiset<int> m{1,2,5,1,1,2,5,15};

    cout<<"insert: ";
    for(int n: m) cout<<n<<" ";
    cout<<endl;

    m.insert(20);
    cout<<"size: "<<m.size()<<endl;
    cout<<"empty: "<<m.empty()<<endl;
    cout<<"lower bound: "<<*m.lower_bound(15)<<endl;
    cout<<"upper bound: "<<*m.upper_bound(1)<<endl;
    m.erase(m.begin());
    m.erase(m.begin(),m.end());
    m.clear();
    m.erase(m.find(15));
    }

    return 0;
}
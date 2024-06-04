/*

## Ways to declare the list :  [#include <list>]
    1. list<int> list;
    2. list<int> list(size, val);
    3. list<int> list{val1,val2,val3.......};
    4. list<int> list(arr, arr+n);
    5. list<int> list(vect.begin(), vec.end());
    6. list<int> list(li.begin(), li.end()); 

# It have iterator too. 

## Imp Methods: 
    front() 
    back() 
    push_front() 
    push_back() 
    pop_front()
    pop_back() 
    insert() 
    size() 
    sort() 
    reverse() 
    empty() 
    erase() 
    remove() 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    cout<<"push back: ";
    for(auto l : lst) cout<<l<<" ";

    auto f = lst.front();
    cout<<endl<<"front: "<<f<<endl;

    auto b = lst.back();
    cout<<"back: "<<b;

    cout<<endl;
    lst.push_front(50);
    cout<<"push front: ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    lst.pop_front();
    cout<<"pop front: ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    lst.pop_back();
    cout<<"pop back: ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    auto it = lst.begin();
    lst.insert(it,5);
    cout<<"insert(it,val): ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    lst.insert(it,2,15);
    cout<<"insert(it,ele_num,ele): ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    cout<<"size: "<<lst.size()<<endl;

    lst.sort();
    cout<<"sort: ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    lst.reverse();
    cout<<"sort: ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    cout<<"empty: "<<lst.empty()<<endl; // check whether list is empty or not

    lst.remove(15);
    cout<<"remove : ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;
    
    it = lst.begin();
    lst.erase(it);
    cout<<"erase(it) : ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    lst.erase(lst.begin(),lst.end());
    cout<<"erase(begin(),end()) : ";
    for(auto l : lst) cout<<l<<" ";
    cout<<endl;

    return 0;
}
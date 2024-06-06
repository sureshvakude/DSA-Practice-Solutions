/*

## Ways to declare the queue : 
    1. queue<int> queue; 
    2. queue<int> copiedQueue(originalQueue); 
    3. queue<int, vector<int>> queueFromVec(vec); 

## Imp Methods: 
    push(g) 
    pop() 
    front() 
    back() 
    empty() 
    size() 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"push,empty,front,pop: ";
    queue<int> cpq(q);
    while(!cpq.empty()){
        cout<<cpq.front()<<" ";
        cpq.pop();
    }

    cout<<endl<<"back: "<<q.back()<<endl;

    cout<<"size: "<<q.size();

    return 0;
}
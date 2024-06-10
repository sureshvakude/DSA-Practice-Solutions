/*

## Ways to declare the stack : 
    1. stack<int> stack; 
    2. stack<int> copiedStack(originalStack); 
    3. stack<int, vector<int>> stackFromVec(vec); 
    4. stack<int, deque<int>> stackFromDeque(deque); 

## Imp Methods: 
    push(g) 
    pop() 
    top() 
    size() 
    empty() 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"size: "<<st.size()<<endl;

    cout<<"push,pop,top,empty: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
/*
Qustion-1 :You have two stack and 1,2,3,4,5 values and you have pushed all these values to S1 (in the order
1,2,3,4,5) and then you took 2 elements from top and inserted into S2 , then pop 1 element from S1
and then take top of S2 and insert into S1. What is the second top element in S1.
Ans - 2.

Qustion-2 :What does this function do ?
void fun(int n){
stack<int> s;
while (n > 0){
s.push(n%2);
n = n/2;
}
while (!s.empty()){
cout<<s.top();
s.pop();
}
}
Ans - Prints binary representation of n

Qustion-3: Which of the following statement(s) about stack data structure is/are NOT correct?
 Ans - Stack data structure can be implemented using linked list
       New node can only be added at the top of the stack
*/

// Qustion-4 Remove kth element from top in a given stack.
#include<iostream>
#include<stack>
using namespace std;
void removingkth(stack<int>& st,int kth){
    stack<int>temp;
    while(st.size()>kth){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    while(st.top()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    removingkth(st,3);
}
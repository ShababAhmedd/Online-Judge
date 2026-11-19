#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> st;
    while (!myStack.empty()) {
        st.push(myStack.top());
        myStack.pop();
    }

    st.push(x);

    while (!st.empty()) {
        myStack.push(st.top());
        st.pop();
    }

    return myStack;
}


// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

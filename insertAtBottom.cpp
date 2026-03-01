#include<iostream>
#include<stack>
using namespace std;
int main(){
    // stack1
    stack<int>st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
    st.push(12);

    //input number to add on the bottom
    int n;
    cout<<"Enter a number to add on the bottom: ";
    cin>>n;

    // making temp stack  and move all the element of previous stack into temp stack
    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    // insert element at the bottom 
    st.push(n);

    //returning back all the element from temp stack to original stack;
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    //output to see new element at the bottom
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
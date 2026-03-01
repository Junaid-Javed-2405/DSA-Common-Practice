#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s1;
    //taking input string
    cout<<"Enter a input: ";
    getline(cin,s1);

    //pushing string into the stack
    stack<char>st;
    for(int i=0;i<s1.length();i++){
        st.push(s1[i]);
    }

    //putting values back from stack into the string 
    int i=0;
    while(!st.empty()){
        s1[i]=st.top();
        st.pop();
        i++;
    }

    //output reverse string
    cout<<s1;
    return 0;
}
#include<iostream>
using namespace std;
class Stack{
    int *stack;
    int capacity;
    int top;
public:
Stack(int capacity){
    this->capacity=capacity;
    top=-1;
    stack=new int [capacity];
}
void push(int x){
    if(top==capacity-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return;
    }
    else{
        top--;
    }
}
int peek(){
    if(top==-1){
        cout<<"Stack is empty";
        return -1;
    }
    else{
        return stack[top];
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(top==capacity-1){
        return true;
    }
    else{
        return false;
    }
}
void status(){
    if(isEmpty()){
        cout<<"Stack is empty";
    }
    else if(isFull()){
        cout<<"Stack is full";
    }
    else{
        cout<<"Stack is partially filled";
    }
}
void Capacity(){
    if(isFull()){
        cout<<"Capacity is 0%";
    }
    else if(isEmpty()){
        cout<<"Capacity is 100%";
    }
    else{
        float percentage = ((float)(capacity-(top+1)) / capacity) * 100;
        cout<<"Capacity is "<<percentage<<" %.";
    }
}
int size(){
    return top+1;
}
~Stack(){
    delete []stack;
}
};

int main(){
    Stack s(5);   // stack of capacity 5

    cout<<"Pushing elements...\n";
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Current top element: "<<s.peek()<<"\n";
    cout<<"Current size: "<<s.size()<<"\n";

    s.status();
    cout<<"\n";
    s.Capacity();
    cout<<"\n\n";

    cout<<"Popping one element...\n";
    s.pop();

    cout<<"Current top element: "<<s.peek()<<"\n";
    cout<<"Current size: "<<s.size()<<"\n";

    s.status();
    cout<<"\n";
    s.Capacity();
    cout<<"\n";

    return 0;
}

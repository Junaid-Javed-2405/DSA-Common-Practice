#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
    int *stack;
    int capacity;
    int top;

public:
    // Constructor
    Stack(int capacity) {
        this->capacity = capacity;
        top = -1;
        stack = new int[capacity];
    }

    // Destructor
    ~Stack() {
        delete[] stack;
    }

    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        stack[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stack[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void status() {
        if (isEmpty())
            cout << "Stack is empty";
        else if (isFull())
            cout << "Stack is full";
        else
            cout << "Stack is partially filled";
    }

    void Capacity() {
        if (isFull())
            cout << "Capacity is 0%";
        else if (isEmpty())
            cout << "Capacity is 100%";
        else {
            float percentage = ((float)(capacity - (top + 1)) / capacity) * 100;
            cout << "Capacity is " << percentage << " %.";
        }
    }

    int size() {
        return top + 1;
    }
};

#endif
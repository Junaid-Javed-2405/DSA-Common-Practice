#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    Stack s(5);

    cout << "Pushing elements...\n";
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Current top element: " << s.peek() << "\n";
    cout << "Current size: " << s.size() << "\n";

    s.status();
    cout << "\n";
    s.Capacity();
    cout << "\n\n";

    cout << "Popping one element...\n";
    s.pop();

    cout << "Current top element: " << s.peek() << "\n";
    cout << "Current size: " << s.size() << "\n";

    s.status();
    cout << "\n";
    s.Capacity();
    cout << "\n";

    return 0;
}
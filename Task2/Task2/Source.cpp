#include <iostream>
#include "MassiveStack.h"
using namespace std;

int main() {
    MassiveStack<int> stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    cout << "Current stack size: " << stack.size() << endl;
    cout << "Top element is: " << stack.top_m() << endl;
    cout << "Elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;
    stack.pop();

    return 0;
}

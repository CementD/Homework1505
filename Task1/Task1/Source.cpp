#include <iostream>
#include <stack>
using namespace std;

bool checkParentheses(string expression) {
    stack<char> parenthesesStack;

    for (char& ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            parenthesesStack.push(ch);
        } 
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (parenthesesStack.empty()) {
                cout << "More closing parentheses than opening ones.\n";
                return false;
            }
            char open = parenthesesStack.top();
            parenthesesStack.pop();
            if ((ch == ')' && open != '(') || (ch == ']' && open != '[') || (ch == '}' && open != '{')) {
                cout << "Closing parentheses without matching opening one.\n";
                return false;
            }
        }
    }

    if (!parenthesesStack.empty()) {
        cout << "More opening parentheses than closing ones.\n";
        return false;
    }
    cout << "The expression is correct.\n";
    return true;
}

int main() {
    string expression = "({x-y-z} [x + 2y] (z + 4x)) ";
    checkParentheses(expression);
    return 0;
}

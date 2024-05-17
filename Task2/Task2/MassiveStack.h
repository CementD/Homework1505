#include <iostream>
using namespace std;

template <class T>
class MassiveStack {
private:
    T* arr;
    int top;
    int capacity;

public:
    MassiveStack(int size);
    ~MassiveStack();
    void push(T x);
    T pop();
    T top_m() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
};

template <class T>
MassiveStack<T>::MassiveStack(int size) {
    arr = new T[size];
    capacity = size;
    top = -1;
}

template <class T>
MassiveStack<T>::~MassiveStack() {
    delete[] arr;
}

template <class T>
void MassiveStack<T>::push(T x) {
    if (isFull()) {
        cout << "Stack overflow" << std::endl;
        return;
    }
    arr[++top] = x;
}

template <class T>
T MassiveStack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        return T();
    }
    return arr[top--];
}

template <class T>
T MassiveStack<T>::top_m() const {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return T();
    }
    return arr[top];
}

template <class T>
bool MassiveStack<T>::isEmpty() const {
    return top == -1;
}

template <class T>
bool MassiveStack<T>::isFull() const {
    return top == capacity - 1;
}

template <class T>
int MassiveStack<T>::size() const {
    return top + 1;
}
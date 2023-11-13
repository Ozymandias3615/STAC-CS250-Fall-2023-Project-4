#include <iostream>
#include <stack>

using namespace std;

class EvenStack {
public:
    EvenStack(); // Constructor
    void push(int value);
    void pop();
    bool empty() const;
    size_t size() const;
    int top() const;
    void getEvenNumbers(stack<int>& inputStack);
    void emptyStack();

private:
    stack<int> m_stack;
};

EvenStack::EvenStack() {}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        m_stack.push(value);
    }
}

void EvenStack::pop() {
    if (!m_stack.empty()) {
        m_stack.pop();
    }
}

bool EvenStack::empty() const {
    return m_stack.empty();
}

size_t EvenStack::size() const {
    return m_stack.size();
}

int EvenStack::top() const {
    return m_stack.top();
}

void EvenStack::getEvenNumbers(stack<int>& inputStack) {
    while (!inputStack.empty()) {
        int element = inputStack.top();
        inputStack.pop();
        if (element % 2 == 0) {
            m_stack.push(element);
        }
    }
}

void EvenStack::emptyStack() {
    while (!m_stack.empty()) {
        int element = m_stack.top();
        m_stack.pop();
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    EvenStack myStack;
    myStack.push(44);
    myStack.push(66);
    myStack.push(99);
    myStack.push(88);
    myStack.pop();
    myStack.emptyStack();

    stack<int> aStack;
    aStack.push(2);
    aStack.push(9);
    aStack.push(6);
    aStack.push(2);
    aStack.push(3);
    aStack.push(5);
    aStack.push(4);

    EvenStack newStack;
    newStack.push(32);
    newStack.getEvenNumbers(aStack);

    cout << endl;
    cout << "aStack has " << aStack.size() << " elements" << endl;
    cout << "myStack has " << myStack.size() << " elements" << endl;
    cout << "newStack has " << newStack.size() << " elements" << endl;

    cout << endl;
    while (!newStack.empty()) {
        cout << newStack.top() << "  ";
        newStack.pop();
    }
    cout << endl;

    return 0;
}

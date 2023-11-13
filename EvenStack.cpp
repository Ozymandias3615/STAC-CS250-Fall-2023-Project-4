#include <iostream>
#include "EvenStack.h"
#include <stack>
#include <unordered_map>

using namespace std;

EvenStack::EvenStack()
{

}

void EvenStack::getEvenNumbers(stack<int> inputStack)
{
    unordered_map<int, int> createStack;
    createStack = { {4, 0}, {5, 0}, {3, 0}, {2, 0},
                    {6, 0}, {9, 0}, {2, 0} };

    for (auto i=createStack.begin(); i!=createStack.end(); i++){
        cout << i->first << " ";
    }
    cout << endl;

    stack<int> EvenStack;

    for (auto i = createStack.begin(); i!=createStack.end(); i++){
        if (i->first % 2 == 0) {
            EvenStack.push(i->first);
        }
    }

    while (!EvenStack.empty()){
        cout << EvenStack.top() << " ";
        EvenStack.pop();
    }
}

void EvenStack::pop()
{
    if (!m_stack.empty())
        m_stack.pop();
}

void EvenStack::push(int num)
{
    if (num % 2 == 0)
        m_stack.push(num);
}

void EvenStack::emptyStack()
{
    return m_stack.empty();
}

int EvenStack::top()
{
    return m_stack.top();
}

size_t EvenStack::size()
{
    return m_stack.size();
}

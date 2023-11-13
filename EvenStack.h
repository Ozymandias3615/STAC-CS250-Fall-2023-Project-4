#ifndef EVENSTACK_H
#define EVENSTACK_H
#include <stack>

#include <unordered_map>

using namespace std;


class EvenStack
{
    public:
        EvenStack();

        void getEvenNumbers(stack<int> inputStack);
        void pop(); // Member function
        void push(int num); // Member function
        void emptyStack(); // Member function
        int top(); // Member function
        size_t size(); // Member function



    protected:

    private:
        stack<int> m_stack;

};

#endif // EVENSTACK_H

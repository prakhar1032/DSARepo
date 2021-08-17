//  Implement Stack from Scratch

#include <bits/stdc++.h>

using namespace std;

#define size 1000
class stacks
{
    int top;

public:
    stacks() { top = -1; }
    int a[size];
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
bool stacks::push(int x)
{
    if (top >= (size - 1))
    {
        cout << "stack overfloew";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}

int stacks::pop()
{
    if (top < 0)
    {
        cout << "stack underflow";
        return false;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int stacks::peek()
{
    if (top < 0)
    {
        cout << "stack is empty";
        return 0;
    }

    else
    {
        int x = a[top];
        return x;
    }
}

bool stacks::isEmpty()
{
    return (top < 0);
}

int main()
{

    class stacks s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack";

    cout << s.peek() << " ";

    return 0;
}
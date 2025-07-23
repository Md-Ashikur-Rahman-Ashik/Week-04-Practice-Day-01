#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stackSize;
    cin >> stackSize;

    stack<int> integerStack;

    for (int i = 0; i < stackSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerStack.push(inputValue);
    }

    stack<int> secondStack;

    while (!integerStack.empty())
    {
        int integerValue = integerStack.top();
        secondStack.push(integerValue);
        integerStack.pop();
    }

    while (!secondStack.empty())
    {
        cout << secondStack.top() << " ";
        secondStack.pop();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int queueSize;
    cin >> queueSize;

    queue<int> integerQueue;

    for (int i = 0; i < queueSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerQueue.push(inputValue);
    }

    queue<int> secondQueue;
    secondQueue = integerQueue;

    stack<int> integerStack;

    for (int i = 0; i < queueSize; i++)
    {
        int integerValue = secondQueue.front();
        integerStack.push(integerValue);
        secondQueue.pop();
    }

    while (!integerStack.empty())
    {
        cout << integerStack.top() << " ";
        integerStack.pop();
    }

    return 0;
}
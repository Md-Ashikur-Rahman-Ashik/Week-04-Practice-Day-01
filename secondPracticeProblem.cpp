#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> integerStack;
    queue<int> integerQueue;

    int stackSize, queueSize;
    cin >> stackSize;

    for (int i = 0; i < stackSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerStack.push(inputValue);
    }

    cin >> queueSize;
    for (int i = 0; i < queueSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerQueue.push(inputValue);
    }

    if(stackSize != queueSize){
        cout << "NO" << endl;
        return 0;
    }

    

    return 0;
}
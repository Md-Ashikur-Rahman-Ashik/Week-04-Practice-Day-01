#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> integerVector;
    int countSize = 0;

    void push(int integerValue)
    {
        countSize++;
        integerVector.push_back(integerValue);
    }

    void pop()
    {
        integerVector.pop_back();
    }

    int top()
    {
        return integerVector.back();
    }

    int size()
    {
        return countSize;
    }

    bool empty()
    {
        return integerVector.empty();
    }
};

int main()
{
    myStack firstStack, secondStack;

    int firstSize;
    cin >> firstSize;

    for (int i = 0; i < firstSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        firstStack.push(integerValue);
    }

    int secondSize;
    cin >> secondSize;

    for (int i = 0; i < secondSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        secondStack.push(integerValue);
    }

    if (firstSize != secondSize)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!firstStack.empty())
    {
        if (firstStack.top() != secondStack.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            firstStack.pop();
            secondStack.pop();
        }
    }

    cout << "YES" << endl;

    return 0;
}
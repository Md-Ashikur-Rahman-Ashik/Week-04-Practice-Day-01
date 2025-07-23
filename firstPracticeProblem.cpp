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

    return 0;
}
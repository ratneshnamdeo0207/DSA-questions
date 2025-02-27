//https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
#include <bits/stdc++.h>
void solve(stack<int>& myStack, int x)
{
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int temp = myStack.top();
    myStack.pop();
    solve(myStack, x);
    myStack.push(temp);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    if(myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }
    solve(myStack, x);
    return myStack;

}

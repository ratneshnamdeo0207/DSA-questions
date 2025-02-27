//https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
void insertAtBottom(stack<int> &stack, int x)
{
    if(stack.empty())
    {
        stack.push(x);
        return;
    }
    int temp = stack.top();
    stack.pop();
    insertAtBottom(stack, x);
    stack.push(temp);

}
void reverseStack(stack<int> &stack) {
    if(stack.empty())
    return;
    int temp = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, temp);
    
}

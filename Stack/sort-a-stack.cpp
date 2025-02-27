//https://www.naukri.com/code360/problems/sort-a-stack_985275
#include <bits/stdc++.h> 
void sort(stack<int> &stack, int x)
{
	if(stack.empty())
	{
	stack.push(x);
		return;
	}
	if(stack.top() < x)
	{
		stack.push(x);
		return;
	}
	else{
		int temp = stack.top();
		stack.pop();
		sort(stack, x);
		stack.push(temp);

	}
}
void sortStack(stack<int> &stack)
{
	if(stack.size() ==  1)
	{
		return ;
	}
	int temp = stack.top();
	stack.pop();
	sortStack(stack);
	sort(stack, temp);
	
}

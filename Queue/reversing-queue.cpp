//https://www.naukri.com/code360/problems/reversing-queue_1170046?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
//stack
void reverse(queue < int > & q) {
    // Write your code here.
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
      
    }
    while(!s.empty())
    {
         q.push(s.top());
        s.pop();
    }
}
// using recursion
void reverse(queue < int > & q) {
    // Write your code here.
    if(q.empty())
        return;

    int f = q.front();
    q.pop();

    reverse(q);
    q.push(f);
}

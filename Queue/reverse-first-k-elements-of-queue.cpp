//https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;
    for(int i = 0;i < k;i++)
    {
        int e = q.front();
        q.pop();
        s.push(e);
    }
    while(!s.empty())
    {
        int e = s.top();
        s.pop();
        q.push(e);
    }
    for(int i = 0;i < q.size() - k;i++)
    {
        int e = q.front();
        q.pop();
        q.push(e);

    }
    return q;
}

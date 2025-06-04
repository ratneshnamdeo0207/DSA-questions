#include<iostream>
using namespace std;
int main()
{
    int n = 5;
   for(int i = 0;i < n;i++)
   {
        if(i == 0 || i == n-1)
        {
            for(int i = 1;i<= n+1;i++)
            {
                cout<<"*";
            }
            cout<<endl;
            continue;
        }
        
       cout<<"*";
       for(int i = 1;i <= n -1;i++)
       {
        cout<<" ";
       }
       cout<<"*";

        cout<<endl;
   }
    
    return 0;
}
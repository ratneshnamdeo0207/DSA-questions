#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int b =1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1; j <= i;j++)
        {
            cout<<b;
            if(b ==1)
            b = 0;
            else
            b = 1;
        }
        cout<<endl;
    }
    return 0;
}
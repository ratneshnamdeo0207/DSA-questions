#include<iostream>
using namespace std;
int power(int n, int i)
{
    if(i == 0)
        return 1;
    return n * power(n, i-1);
}
int main()
{
    int n = 4, i = 4;
    int x = power(n,i);
    cout<<"Power of n is "<<x;
    return 0;
}
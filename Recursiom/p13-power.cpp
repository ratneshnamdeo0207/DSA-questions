#include<iostream>
using namespace std;
int power(int a, int b)
{
 if(b == 0)
    return 1;
    return a * power(a, b-1);
}
int power2(int a, int b)
{
 if(b == 0)
    return 1;
    if(b % 2 == 0)
        return power(a, b/2) * power(a, b/2);
    return a * power(a, b/2) * power(a, b/2);
}
int main()
{
    int a = 5, b = 4;
    int x = power2(a, b);
    cout<<"ans = "<<x;
    return 0;
}
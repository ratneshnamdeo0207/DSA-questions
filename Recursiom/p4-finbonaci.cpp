#include<iostream>
using namespace std;
void fib(int n, int i)
{
    if(i == n)
        return ;
    int j = i; //1
    int k = ++i; //2
    cout<<j<<" "<<k<<" "; // 0 1

}
int main()
{
    int n = 8, i = 0;
    fib(13, i);
    return 0;
}
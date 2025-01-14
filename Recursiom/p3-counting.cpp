#include<iostream>
using namespace std;
void count(int n )
{
  if(n==1){
    cout<<1<<" ";
     return;
     }
    cout<<n<<" ";
    count(n-1);
}
// void count(int n)
// {
//     if(n == 1)
//         return;
//     cout<<n-1<<" ";
//     count(n-1);
// }
int main()
{
    int n = 5;
    count(n);
    return 0;
}
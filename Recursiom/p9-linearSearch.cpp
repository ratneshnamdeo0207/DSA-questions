#include<iostream>
using namespace std;
int linearSearch(int a[], int n, int k)
{
    if(n == 0)
        return -1;
    if(a[n-1] == k)
        return n-1;
    n = n-1;
    return linearSearch(a, n, k);
}
int main()
{
    int a[] = {1,2,3,4,6,7,8};

    int n = sizeof(a)/sizeof(int);
    cout<<n;
   if( linearSearch(a,n, 8) != -1)
   {
    cout<<"found";
   }
   else
   cout<<"Not found";
    return 0;
}
#include<iostream>
using namespace std;
void p(int arr[], int s, int e)
{
    for(int i = s;i <= e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int arr[],  int k, int s, int e)
{
    p(arr, s, e);
    if(s > e)
        return -1;
    int mid = s + ( e - s)/2;
    if(arr[mid] == k)
        return mid;
    else if(arr[mid] > k)
    {
        return binarySearch(arr, k, s, mid-1);
    }
    else{
        return binarySearch(arr, k, mid+1, e);
    }
}
// int binarySearch(int arr[],  int k, int s, int e)
// {
//     if(s > e)
//     return -1;
//     int ans = -1;
//    if(arr[s] == k)
//    {
//     cout<<"start = Found at "<<s<<endl;
//      return s;
//    }
//    if(arr[e] == k)
//     {
//         cout<<"end = Found at "<<e<<endl;
//         return e;
//     }
//     int mid = s + (e - s)/2;
//     if(arr[mid]  == k)
//     {
//         cout<<"eqyak = found at "<<mid;
//         return  mid;
//     }
//     else if(arr[mid]> k)
//     {
//          ans = binarySearch(arr, k, 0, mid-1);
       
//     }
//        else if(arr[mid]< k)
//     {
//          ans = binarySearch(arr, k, mid+1, e);
        
//     }

//     return ans;
// }

int main()
{
     int a[] = {1,2,3,4,6,7,8};

    int n = sizeof(a)/sizeof(int);
    cout<<n;
   if( binarySearch(a,0, 0, n-1) != -1)
   {
    cout<<"found";
   }
   else
   cout<<"Not found";
    return 0;
}
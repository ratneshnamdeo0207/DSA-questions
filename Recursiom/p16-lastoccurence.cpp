#include<iostream>
using namespace std;
int  lastOccurence(int arr[], int s, int e, int k)
{
        if(s > e)
        return -1;
    int ans = -1;
   
    
    int m = s + (e - s)/2;
    if(arr[m] == k)
    {
        
        
     
        ans = lastOccurence(arr, m + 1, e,k);
        return (ans != -1)?ans : m;
    }
    else if(arr[m] > k)
    {
       
        return  lastOccurence(arr, s, m-1, k);
        
        
    }
    else{
       
        return  lastOccurence(arr, m + 1, e, k);
         
    }
   return ans;
}
int main()
{
    int arr[] = {0,0,0, 0,1,1,1,1,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(int);
    int k = 1;
   k =  lastOccurence(arr,0, n-1, k);
   if(k == -1)
    cout<<"Element not found";
    else{
        cout<<"Element found at "<<k;
    }
    return 0;
}
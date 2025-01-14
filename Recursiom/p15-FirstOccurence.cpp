#include<iostream>
using namespace std;
int  firstOccurence(int arr[], int s, int e, int k)
{
    int ans = -1;
   
    
    int m = s + (e - s)/2;
    if(arr[m] == k)
    {
        
         if(s > e)
        return ans;
        ans = firstOccurence(arr, s, m -1,k);
         if(ans == -1)
        ans = m;
    }
    else if(arr[m] > k)
    {
        if(s > e)
        return ans;
        ans =  firstOccurence(arr, s, m-1, k);
        
        
    }
    else{
         if(s > e)
        return ans;
         ans = firstOccurence(arr, m + 1, e, k);
         
    }
   return ans;
}
int main()
{
    int arr[] = {0,0,0, 0,1,1,1,1,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(int);
    int k = 1;
   k =  firstOccurence(arr,0, n-1, k);
   if(k == -1)
    cout<<"Element not found";
    else{
        cout<<"Element found at "<<k;
    }
    return 0;
}
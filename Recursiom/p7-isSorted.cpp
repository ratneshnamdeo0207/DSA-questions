#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if(n == 0)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    return isSorted(arr+1, n-1);

}

// bool isSorted(int arr[], int n)
// {
//     if(n == 0|| n == 1)
//     return true;

//     if(arr[0] > arr[1])
//         return false;
//     bool r = isSorted(arr+1, n-1);
//     return r;
// }
int main()
{
    int arr[] = {1,4,3,4,5};
    int n = 5;
    if(isSorted(arr, n))
        cout<<"Sorted";
    else
        cout<<"unsorted";
    return 0;
}
#include<iostream>
using namespace std;
void saydigit(int n )
{
    string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n == 0)
        return;
    int d = n % 10;
    saydigit(n/10);
    cout<<arr[d]<<" ";
    
}
// void saydigit(int n)
// {
//     if(n == 0)
//     return;
//     string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     int digit = n % 10;
   
//     n = n / 10;
//     saydigit(n);
//      cout<<arr[digit]<<" ";

// }
int main()
{
    int n = 415;
    saydigit(n);
    return 0;
}
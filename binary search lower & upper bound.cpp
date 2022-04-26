#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n,int key)
{

    int low=0;
    int high=n-1;

    while(low< high)
    {
        int mid= low+ (high-low)/2;

        if(key > arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }

    }
    if(low< n && arr[low]< key)
        low++;


    return low;
}
int main()
{
    int arr[]= {1,2,4,4,4,5,7,7};
    int n= sizeof(arr)/sizeof(int);

    int temp= binarySearch(arr,n,4);

    cout<< temp<<endl;
    return 0;
}

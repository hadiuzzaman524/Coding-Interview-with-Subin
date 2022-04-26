#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int n, int key){

    int low=0;
    int high=n-1;

    while(low<=high){

        int mid= low + (high-low)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[low]< arr[mid] && key>= arr[low] && key < arr[mid]){
            high=mid-1;
        }
        else if(arr[high] > arr[mid] &&  key<= arr[high] && key> arr[mid] )
        {
            low=mid+1;
        }
        else if(arr[low]> arr[mid])
            high=mid-1;
        else
            low=mid+1;



    }
return -1;
}
int main()
{
    int arr[]={3,4,5,6,7,1,2};
    int n= sizeof(arr)/sizeof(int);

    int res= binarySearch(arr,n, 1);
    cout<< res<<endl;

    return 0;
}

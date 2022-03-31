#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {5,6,1,2,4,7};
    int n=sizeof(arr)/sizeof(int);

    int st,ed,i;
    for(i=0; i<n; i++){
        if(arr[i]>arr[i+1])
            break;
    }
    st=i;

    for(i=n-1; i>st; i--){
        if(arr[i]< arr[i-1] || arr[st] > arr[i])
            break;
    }
    ed=i;

    int maximum= INT_MIN;
    int minimum= INT_MAX;

    for(int i=st; i<=ed; i++){

        if(arr[i]> maximum){
            maximum = arr[i];
        }
        if(arr[i]< minimum){
            minimum= arr[i];
        }
    }

    for(int i=0; i<st;i++){
        if(arr[i] > minimum)
        {
         st= i;
         break;
        }
    }

    for(int i=n-1; i>ed; i--){
        if(arr[i] < maximum){
            ed=i;
            break;
        }
    }
    cout<< st<< " "<< ed<<endl;
    return 0;
}

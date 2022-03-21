#include <bits/stdc++.h>

using namespace std;
int removeDuplicate(int arr[], int n)
{

    int j=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[j]=arr[i];
            j++;
        }

    }
    return j;
}
int main()
{

    int arr[]= {1,1,2,3,3};
    int n= sizeof(arr)/sizeof(int);
    int x=removeDuplicate(arr,n);

    for(int i=0; i<x; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;


    return 0;
}

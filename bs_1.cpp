#include <bits/stdc++.h>
using namespace std;

/*
Discussion:
First of all need to sort the arry in desending order. the larger value is
come first. and we need to return kth value.

The time complexity is O(nlog(n)) for better sorting algorithm

*/
int main()
{
    freopen("input.txt", "r", stdin);

    int n, k;
    cin>>n>> k;

    int arr[n];

    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

    sort(arr, arr+n, greater<int>());

    cout<< arr[k-1]<<endl;


    return 0;
}

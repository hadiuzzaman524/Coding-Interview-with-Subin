#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={-1,-2,1,2,3,-5,4};
    int n=sizeof(arr)/sizeof(int);

    int maxSum=INT_MIN;
    int currentSum=0;

    for(int i=0; i<n; i++){
        currentSum+= arr[i];

        if(maxSum< currentSum)
            maxSum=currentSum;
        if(currentSum<0)
            currentSum=0;
    }
    cout<< maxSum<<endl;
    return 0;
}

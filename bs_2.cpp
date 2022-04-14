#include <bits/stdc++.h>
using namespace std;

/*
Discussion:
need to find friend arry. then find it is desending or not..
time complexity is O(nlog(n))

*/
bool checkFriend(int arr[], int n)
{
    int aN= arr[n-1];

    int farr[n];
    int temp[n];
    for(int i=0; i<n; i++)
    {
        farr[i]= aN-arr[i];
        temp[i]=aN-arr[i];
    }

    sort(temp,temp+n, greater<int>());

    bool flag=true;

    for(int i=0; i<n; i++){
        if(temp[i]!=farr[i])
        {
            flag=false;
            break;
        }
    }

    return flag;
}
int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool flag=checkFriend(arr,n);

    if(flag)
    {
        cout<< "Yes"<<endl;
    }
    else
    {
        cout<< "No"<<endl;
    }


    return 0;
}


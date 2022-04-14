#include <bits/stdc++.h>
using namespace std;

/*
Discussion:

Time complexity is O(n)
*/

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    cin>> t;
    int n,x;
    while(t--)
    {
        cin>>n>>x;

        int c=0;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int sum=0;
        if(n>=1) // first condition team 1<=T<=N
        {
            for(int i=0; i<n; i++)
                sum+=arr[i];
            if(sum<x)
                c++;
        }


        if(n>1)
        {
            bool flag=true;
            for(int i=0; i<n-1; i++) // check ascending order 0,1,2...
            {

                if(arr[i] > arr[i+1] )
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
                c++;
        }

        // cout<< n<< " "<< (arr[n-1]-arr[0])+1<<endl;



        cout<< c<< endl;

    }



    return 0;
}


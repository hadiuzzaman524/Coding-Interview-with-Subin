#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]= {3,5,4,2};
    int n= sizeof(arr)/sizeof(int);
// Time complexity is O(n^2)
    int start,finish;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                start=i;
                finish=j;
            }
        }
    }
    cout<< start<< " "<< finish<<endl;


    // Time complexity O(n*log(n))
    map<int,int> m;
    map<int,int> :: iterator it;


    for(int i=0; i<n; i++)
    {
        m[arr[i]]=i;
    }
    cout<<endl;

    int maximum= INT_MIN;
    int minimum= INT_MAX;

    for( it=m.begin(); it!=m.end(); it++)
    {

        if(it->second <= minimum){
            minimum= it->second;
        }else{

            maximum= max(maximum, it->second-minimum);
        }

    }

    cout<< maximum<<endl;


    return 0;
}

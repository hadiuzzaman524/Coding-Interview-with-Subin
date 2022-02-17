#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int index=1;

    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[index++]=arr[i];
        }
    }

 return index;

}
int main()
{

    int arr[8]= {1,1,2,3,3,3,4,5};
    int lastIndex= removeDuplicate(arr,8);
    for(int i=0; i<lastIndex; i++)
        cout<< arr[i]<< " ";


    cout<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

double root(int n)
{

    int low=0;
    int high=n;

    double ans=0.0;

    while(low<=high)
    {
        double mid= ((double)(low+high)/2.0);
      //  cout<< mid<<endl;
        cout<< "low: "<< low<<  "  high: "<<high<< " mid: "<<mid<<endl;
        int sqr=mid*mid;
        if(sqr==n)
        {
            ans= mid;
            break;

        }
        if(sqr < n)
        {

            low=(int)mid+1;
            ans=mid;

        }
        else
        {
            high=(int)mid-1;
        }


    }


    return ans;
}
int main()
{

    cout<< root(19)<<endl;
    return 0;
}

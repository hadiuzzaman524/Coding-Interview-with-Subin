#include <bits/stdc++.h>
using namespace std;

class Interval
{
public:
    int startT;
    int endT;
    Interval() {};
    Interval(int s,int e)
    {
        startT=s;
        endT=e;
    };
};

bool cmp(Interval &left, Interval &right)
{
    return left.startT < right.startT;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int n;
    cin>>n;

    Interval arr[n];

    for(int i=0; i<n; i++)
    {
        //  cout<< "Enter start and end time: ";
        cin>> arr[i].startT;
        cin>> arr[i].endT;
    }

    sort(arr, arr+n, cmp);

    vector<Interval> v;
    v.push_back(arr[0]);

    int st= v[0].startT;
    int ed= v[0].endT;

    for(int i=1; i<n; i++)
    {
        if(arr[i].startT > ed)
        {
            v.push_back(arr[i]);
            st= arr[i].startT;
            ed= arr[i].endT;
        }
        else if(arr[i].endT > ed)
        {
            ed= arr[i].endT;
            v.back().endT=ed; // last index of array
        }

    }

    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i].startT<< " "<< v[i].endT<<endl;
    }

    return 0;
}

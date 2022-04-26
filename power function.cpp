#include <bits/stdc++.h>
using namespace std;

int pow(int a, int n)
{
    if(n==0)
        return 1;
    if(n<0)
        return 1/ pow(a,-n);
    if(n%2==1)
        return a*pow(a, n-1);
    int x= pow(a,n/2);
    return x*x;
}

int poww(int a, int n)
{

    if(n==0)
        return 1;

    bool flag=false;
    if(n<0)
    {
        flag=true;
        n*=-1;
    }

    int result=1;

    while(n)
    {
        if(n%2==1)
        {
            result*=a;
            n=n-1;
        }
    n=n/2;
    a*=a;


    }

    if(!flag)
        return result;
    return 1/result;



}
int main()
{
    cout<< pow(2,3 )<<endl;
    cout<< poww(2,3)<<endl;
    return 0;
}

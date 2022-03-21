#include <bits/stdc++.h>

using namespace std;

void printSpiralOrder(int arr[4][4], int r, int c)
{
    vector<int> v;
    int direction=0;

    int top=0;
    int left=0;
    int right=c-1;
    int bottom=r-1;


    while(true)
    {

        if(top>bottom && left>right)
            break;

        if(direction==0)// left to right
        {
            for(int i=left; i<=right; i++)
            {
                v.push_back(arr[top][i]);

            }
            top++;
        }
        else if(direction==1) // top to bottom
        {
            for(int i=top; i<=bottom; i++)
            {
                v.push_back(arr[i][right]);

            }
            right--;
        }
        else if(direction==2) // right to left
        {
            for(int i=right; i>=left; i--)
            {
                v.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        else // bottom to top
        {
            for(int i=bottom; i>=top; i--)
            {
                v.push_back(arr[i][left]);
            }
            left++;
        }
        direction= (direction+1)%4;


    }

    for(int i=0; i<v.size(); i++)
        cout<< v[i]<< " ";
    cout<<endl;
}
int main()
{
    int arr[4][4]=
    {
        {1,2,3,33},{4,5,6,66},{7,8,9,99},
        {11,12,14,14}
    };

    printSpiralOrder(arr,4,4);



    return 0;
}

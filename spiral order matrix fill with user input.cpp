#include <bits/stdc++.h>
using namespace std;

void fillSpiralOrder(int mat[4][4], int n)
{
    int left=0;
    int top=0;
    int right=n-1;
    int bottom= n-1;

    int direction=0;
    int val=1;
    while(true)
    {
        if(left>right && top> bottom)
            break;
        if(direction==0) //left to right
        {
            for(int i=left; i<=right; i++){
                mat[top][i]=val++;
            }
            top++;
        }
        else if(direction==1) // top to bottom
        {
            for(int i=top; i<=bottom; i++){
                mat[i][right]=val++;
            }
            right--;
        }
        else if(direction==2) // right to left
        {
            for(int i=right; i>=left; i--){
                mat[bottom][i]=val++;
            }
            bottom--;
        }
        else // bottom to top
        {
            for(int i=bottom; i>=top; i--){
                mat[i][left]=val++;
            }
            left++;
        }


        direction= (direction+1)%4;
    }
}

int main()
{

    int mat[4][4];
    fillSpiralOrder(mat,4);

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<< mat[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}

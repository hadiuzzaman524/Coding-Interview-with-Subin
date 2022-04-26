#include <bits/stdc++.h>
using namespace std;


int lowerBound(int arr[], int n, int key){

    int low=0;
    int high=n-1;

    while(low< high){
        int mid= low+ (high-low)/2;

        if(key > arr[mid]){
            low= mid+1;
        }
        else{
            high= mid;
        }
    }

    while(low < n && arr[low] < key)
        low++;

    return low;
}

int upperBound(int arr[], int n, int key){

    int low=0;
    int high=n-1;

    while(low< high){
        int mid= low+ (high-low)/2;

        if(key > arr[mid]){
            low= mid+1;
        }
        else{
            high= mid;
        }
    }

    while(low < n && arr[low] <=key)
        low++;

    return --low;
}
int main(){

int arr[]= {1,2,4,4,4,4,5,5,5,5,7,7};
int n= sizeof(arr)/sizeof(int);

int low= lowerBound(arr,n,5);
int high= upperBound(arr,n,5);

cout<< low<< " "<< high<<endl;
return 0;
}

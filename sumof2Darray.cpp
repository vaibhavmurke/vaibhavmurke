#include<iostream>
using namespace std;
int sumof2D(int arr[][4],int n,int m )

{
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }

    }
    cout<<"Total sum "<<sum<<endl;
}
int main(){
    int arr[][4]={
        {20,20,10,30},
        {10,20,30,50},
        {10,20,11,33},
        {11,14,47,85}
    };

    int n=4,m=4;
    sumof2D(arr,n,m);
    return 0;
}

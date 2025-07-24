#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> & arr ,int k){
    
    int n=arr.size();
    k=k%n;
    vector<int>temp;
    for(int i=n-k;i<n;i++){
       // int value=arr[i];
        temp.push_back(arr[i]);
    }
    for(int i=n-1;i>=k;--i){
        arr[i]=arr[i-k];

    }
    for(int i=0;i<k;++i){
        arr[i]=temp[i];
    }
        
}
int main(){

    vector<int>arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    int n=arr.size();
    int k;
    cout<<"Enter the valur of k"<<endl;
    cin>>k;
    print(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

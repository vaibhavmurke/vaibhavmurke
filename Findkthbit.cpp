#include<iostream>
using namespace std;
int kthbit(int k,int n){
    return n | (1<<k);
}
int main(){
    int k ,n;
    cout<<"Enter the n :"<<endl;
    cin>>n;
    cout<<"Enter the k :"<<endl;
    cin>>k;
   int ans= kthbit(k,n);
   cout<<"ans is : "<<ans<<endl;
    return 0;
}

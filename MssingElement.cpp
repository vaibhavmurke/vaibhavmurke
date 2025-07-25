#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingelement(vector<int>&arr){
    int n =arr.size();
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
    int mid=(s+e)/2;
        if(mid == arr[mid]){
            s=mid+1;
        }else{
            ans=mid;
            e=mid-1;
        }
    } 
    return ans;
}
    
int main(){
    vector<int>arr={0,1,2,4,5,6,7};
    sort(arr.begin(),arr.end());
   int re= missingelement(arr);
   cout<<"Missing element "<<re<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

void RotateArray(vector<int>&arr,int k){
    int n =arr.size();
    k=k %n;
    vector<int>temp;
    // step 1 = copy eleemrnt in temp
    for(int i =n-k;i<n;i++){
        temp.push_back(arr[i]);
    } 
    // step 2 : shifted array by k 
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];//i=5 and k=3 so elemrnt of index 2 is shifted in index 5 

    }
    //step 3: copy element frm temp 
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    int k=3; 
    RotateArray(arr,k);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

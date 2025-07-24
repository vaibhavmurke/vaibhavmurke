#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
/*
//accumulate
    vector<int>arr(6);
    arr[0]=10;
    arr[1]=1;
    arr[2]=20;
    arr[3]=30;
    arr[4]=40;
    arr[5]=50;
    
    int totalsum=accumulate(arr.begin(),arr.end(),0);
    cout<<totalsum<<endl;
    */
   /*
   //inner_product
   vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int>secomd;
    secomd.push_back(4);
    secomd.push_back(5);
    secomd.push_back(6);
    int ans =inner_product(first.begin(),first.end(),secomd.begin(),0);
    cout<<ans<<endl;
    */
  
  /*
  //partial_sum
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    vector<int>result(first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    for(int a:result){
        cout<<a<<" ";
    }
*/
/*
    //iota
    vector<int>arr(5);
    iota(arr.begin(),arr.end(),205);
    for(int a: arr){
        cout<<a<<" ";
    }
        */
        return 0;
}

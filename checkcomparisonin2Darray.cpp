#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){

        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<b;
    }

}
bool  mycomparatorfor1stIndex(vector<int>&a,vector<int>&b){
    return a[1] <b[1];
}
int main()
{
    vector<vector<int>>v;
    int  n ;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>temp;
        int a,b;
        cout<<"Enter the a,b:"<<endl;
        cin>>a>>b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    } 
    cout<<"Here are the value :"<<endl;
    print(v);
   sort(v.begin(),v.end(),mycomparatorfor1stIndex);
    print(v);
    return 0;
}

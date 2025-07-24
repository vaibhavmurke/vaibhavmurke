#include<iostream>
#include<vector>
using namespace std;
int Secondlargest(vector<int >&arr){
    int largest=-1;
    int secondlarg=-1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondlarg=largest;
            largest=arr[i];
        }else if(arr[i]< largest && arr[i] >secondlarg){
            secondlarg=arr[i];

        }
    }
    return secondlarg;
}
int main(){
    vector<int>arr={22,11,23,25,54};
    int re=Secondlargest(arr);
    cout<<"Second largest element "<<re<<endl;
    return 0;
}

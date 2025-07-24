#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Doubleint (int a){
    cout<<a*2<<endl;
}
bool checkEeven(int a){
    return (a%2 == 0);
}
int main(){
  vector<int>arr={10,20,30,40,50,60};
//   auto it = find_if(arr.begin(),arr.end(),Doubleint);
// if(it !=arr.end()){
//     cout<<"first even no"<<*it<<endl;
// }
//     cout<<*it<<endl;
    int target=40;
    for_each(arr.begin(),arr.end(),Doubleint);
   // cout<<ans<<endl;
   reverse(arr.begin(),arr.end());
   for(int a:arr){
    cout<<a<<" ";
   }
   cout<<endl;
   rotate(arr.begin(),arr.begin()+2,arr.end());
   for(int a:arr){
    cout<<a<<" ";
   }
   cout<<endl;
//    arr.erase(it,arr.end());

//    for(int a : arr){
//     cout<<a<<endl;
//    }
auto it =partition(arr.begin(),arr.end(),checkEeven);
for(int a:arr){
    cout<<a<<" ";
}
    return 0;
}

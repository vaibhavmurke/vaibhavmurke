#include<iostream>
#include<vector>
using namespace std;

int peakElementInMountainArr(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        // if (arr[mid] < arr[mid + 1]) {
        
        //     s = mid + 1;
        // } else {
            
        //     e = mid;
        // }
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        if(arr[mid] < arr[mid-1]){
            e=mid-1;
        }else{
            ans=mid;
            break;
        }
        return ans;
    }

    
   // return s;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 1, 2, 3};
    int re = peakElementInMountainArr(arr);
    cout << "Peak Element is at index: " << re << ", value: " << arr[re] << endl;
    return 0;
}

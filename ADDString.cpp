// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
// Example 1:
// Input: num1 = "11", num2 = "123"
// Output: "134"

#include<iostream>
#include <string >
using namespace std;
#include<algorithm>
string addStrings(string num1, string num2) {
       int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string ans;

        while (i >= 0 || j >= 0 || carry > 0) {
            int currsum = 0;
            if (i >= 0) {
                currsum += num1[i] - '0';
                i--;
            }
            if (j >= 0) {
                currsum += num2[j] - '0';
                j--;
            }
            currsum += carry;
            int lastdigit = currsum % 10;
            carry = currsum / 10;
            ans.push_back(lastdigit + '0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
int main(){
    string num1 ;
    cout<<"Enter the string (int num )"<<endl;
    cin>>num1;
    string num2 ;
    cout<<"Enter the string (in num)"<<endl;
    cin>>num2;
    string re = addStrings(num1,num2);
    cout<<"add a two string :"<<re<<endl;
    return 0 ;
}

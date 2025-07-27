// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
// Example 1:
// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string RemoveDuplicate(string &s){
    string ans = "";
    for(int i =0 ; i<s.length();i++){
        char ch = s[i];
        if(ans.empty()){
            ans.push_back(ch);
        }else if(ch != ans.back()){
            ans.push_back(ch);
        }else {
            ans.pop_back();
        }
    }
    return ans;
}


int main(){
   // string s ="abbaca";
    string s;
    cout<<"Enter the char in string :"<<endl;
    getline(cin,s);
  cout<<"Ans Is :"<<  RemoveDuplicate(s);

    return 0 ;
}

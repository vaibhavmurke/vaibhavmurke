// Given a string s, the task is to determine whether the string is a valid palindrome. A palindromic string reads the same backward as forward when ignoring cases and removing all non-alphanumeric characters.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true
// Explanation: After removing non-alphanumeric characters and converting to lowercase, the string becomes "amanaplanacanalpanama", which is a palindrome.

class Solution {
public:

    bool isvalid(char ch){
        if(ch >= 'a'&& ch <= 'z' ){
            return true;
        }
        if(ch >= 'A' && ch <= 'Z'){
            return true;
        }
        if(ch >= '0' && ch <= '9'){
            return true;
        }
        return false;
    }
    string Normalisestring(string &s){
        string newstr ="";
        for(int i =0 ;i< s.length();i++){
            char ch =s[i];
            if(isvalid(ch)){
                if(ch >= 'A' && ch <='Z'){
                    ch = ch - 'A' + 'a';
                }
                newstr.push_back(ch);
            }
        }
        return newstr;
    }
    bool isPalindrome(string s) {
        // User will add logic here
        string newstr =Normalisestring(s);
        int st = 0;
        int e =newstr.length()-1;
        
        while(st <= e){
            if(newstr[st] != newstr[e]){
                return false;
            }
            else{
                st++;
                e--;

            }
        }
        return true ;
    }
};

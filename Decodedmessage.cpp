// You're given a message that was encoded using a custom mapping, and the task is to decode this message. The encoding works as follows:
// Each lowercase letter 'a' to 'z' is mapped to a number string in the range of '1' to '26'.
// A sequence of the message string is formed by concatenating these numbers.
// You are required to decode such a number string back to the original message.
// Example
// Input:
// message = "123456"
// Output
// "abcdef"

#include<iostream>
#include <string >
using namespace std;
#include<algorithm>
string decodeMessage(string message) {
        // Implement the decoding logic here
        string decoded ;
        for(int i =0 ;message[i] ; i++){
            decoded += (message[i] - '1') + 'a';
        }
        return decoded ;
    }
//    message[i] == the assic val of '/0 '(null) is zero so we can use this in for loop 
int main(){
    string message;
    cout<<"Enter the message :"<<endl;
    cin>>message;
    string re =decodeMessage(message);
    cout<<"Decoded string is :"<<re<<endl;
    return 0 ;
}

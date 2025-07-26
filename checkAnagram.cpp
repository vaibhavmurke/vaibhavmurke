// You are given two strings, s and t. Your task is to determine if t is an anagram of s. An anagram is formed by rearranging the letters of a word or phrase to produce a new word or phrase, 
// using all the original letters exactly once. In simpler terms, t is an anagram of s if you can rearrange the letters of s to get t.

// Example
// Input:
// s = "anagram"
// t = "nagaram"
//   output =true

//fakt function ahe 

 bool isAnagram(const string& s, const string& t) {
        // Implement logic to check if `t` is an anagram of `s`
        //for stirng s ,increase the count i.e ++
        int arr[1000]={0};
        for(int i =0; i < s.length(); i++){
            char ch = s[i];
            arr[ch] ++;
        }
        //for string t ,decrase the count i.e --
        for(int i = 0; i<t.length(); i++){
            char ch = t[i];
            arr[ch] --;

        }

        //check occurance is 0 only
        for(int i =0 ; i<1000; i++){
            if(arr[i] != 0){
                return false ;
        }
            }
       return  true ;
    }

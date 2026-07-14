class Solution {
public:
    bool isPalindrome(string s) {
       string str;
       for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            s[i]=tolower(s[i]);
            str+=s[i];
        }
       }
       //checking palindrome
       int start=0;
       int e=str.size()-1;
       while(start<e){
        if(str[start]!=str[e]){
            return false;
        }
        else{
            start++;
            e--;
        }
       }
       return true;
    }
};
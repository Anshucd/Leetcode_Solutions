class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());

        char ch;
       int st=0;
        int e=s.size();
        
        while(st<=e-1){
            ch=s[st];
            s[st]=s[e-1];
            s[e-1]=ch;
            st++;
            e--;

        }
        
    }
};
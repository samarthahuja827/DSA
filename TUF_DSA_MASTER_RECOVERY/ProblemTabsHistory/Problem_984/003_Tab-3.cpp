class Solution {
public:
    string reverseWords(string s) {
       string ans;
       int i=s.size()-1;
       while(i>=0){
        while(i>=0 && s[i]==' ') i--; // move through blank spaces
        int j=i; // word end
        while(i>=0 && s[i]!=' ') i--; // move through word
        if(j>=0){
            if(!ans.empty()) ans+=' ';
            ans+=s.substr(i+1,j-i);
        }
       }
       return ans;
    } 
};
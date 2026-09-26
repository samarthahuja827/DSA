class Solution {
public:
    string reverseWords(string s) {
       string ans;
       int end=s.size();
       while(end>0){
        while(end>0 && s[end-1]==' ') end--; // find where a word begins
        int start=s.find_last_of(' ',end-1);
        if(!ans.empty()) ans+=' ';
        ans+=s.substr(start+1,end-start-1);
        end=start;
       }
       return ans;
    } 
};

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int j=0;
        for(int i=0;i<s.size();){
            while(i<s.size() && s[i]==' ') i++;
            if(i==s.size()) break;
            if(j>0) s[j++]=' ';
            int start=j;
            while(i<s.size() && s[i]!=' ') s[j++]=s[i++];
            reverse(s.begin()+start,s.begin()+j);
        }
       s.resize(j);
       return s;
    } 
};
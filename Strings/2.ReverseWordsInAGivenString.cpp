// (Self thought) Valid only if no extra spaces are present
// class Solution {
// public:
//     string reverseWords(string s) {
//        string ans;
//        int j=s.size()-1;
//        for(int i=s.size()-1;i>=0;i--){
//         if(s[i]==' '){
//             ans+=s.substr(i+1,j-i);
//             j=i-1;
//             ans+=' ';
//         }
//         if(i==0){
//             ans+=s.substr(i,j+1);
//         }
//        }
//        return ans;
//     } 
// };

class Solution {
public:
    string reverseWords(string s) {
       string ans,word;
       stringstream ss(s);
       vector<string> v;
       while(ss>>word) v.push_back(word);
       for(int i=v.size()-1;i>=0;i--){
        ans+=v[i];
        if(i!=0) ans+=' ';
       }
       return ans;
    } 
};

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

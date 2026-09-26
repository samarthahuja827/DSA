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
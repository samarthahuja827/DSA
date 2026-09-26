class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance=0;
        for(char c: s){
            if(c=='('){
                if(balance>0) ans+=c;
                balance++;
            }
            else{
                balance--;
                if(balance>0) ans+=c;
            }
        }
        return ans;
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==')') count--; 
            if(count!=0) ans+=s[i];
            if(s[i]=='(') count++;
        }
        return ans;
    }
};

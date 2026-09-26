// Stack
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;
        for(auto x: s){
            if(x=='('){
                if(!st.empty()) ans+=x;
                st.push(x);
            }
            else{
                st.pop();
                if(!st.empty()) ans+=x;
            }
        }
        return ans;
    }
};

// Stack
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;
        for(auto x: s){
            if(x==')') st.pop();
            if(!st.empty()) ans+=x;
            if(x=='(') st.push(x);
        }
        return ans;
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance=0, start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') balance++;
            else balance--;
            if(balance==0){
                ans+=s.substr(start+1,i-start-1);
                start=i+1;
            }
        }
        return ans;
    }
};

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

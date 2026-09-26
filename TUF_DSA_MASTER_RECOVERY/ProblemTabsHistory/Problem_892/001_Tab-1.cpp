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

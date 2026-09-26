class Solution{	
public:		
    string largeOddNum(string& s){
        string ans;
        int odd=-1;
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2){
                odd=i;
                break;
            }
        }
        if(odd==-1) return "";
        int j=0;
        while(j<s.size()){ // or while(j<s.size() && s[j]=='0') j++;
            if(s[j]=='0') j++;
            else break;
        }
        return s.substr(j,odd-j+1);
    }
};
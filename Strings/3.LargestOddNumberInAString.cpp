class Solution{	
public:		
    string largeOddNum(string& s){
        string ans;
        int flag=0, odd=-1;
        for(int i=s.size()-1;i>=0;i--){ // piche se pehla odd no dhundho
            if((s[i]-'0')%2==1) {
                odd=i;
                break;
            }
        }
        if(odd==-1) return "";
        for(int j=0;j<=odd;j++){
            if(s[j]!='0'){
                flag=1;
            }
            if(flag==1) ans+=s[j];
        }
        return ans;
    }
};


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

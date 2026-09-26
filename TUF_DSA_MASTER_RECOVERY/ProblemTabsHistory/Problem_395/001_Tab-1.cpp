// vertical scanning
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			string ans="";
            for(int i=0;i<str[0].size();i++){ // scanning letters from first word
                char ch=str[0][i];
                int flag=1;
                for(int j=1;j<str.size();j++){ //checking in other words
                    if(str[j].size()<=i|| ch!=str[j][i]){
                        flag=0;
                        break;
                    }
                }
                if(flag==0) break;
                else ans.push_back(ch);
            }
            return ans;
		}
};
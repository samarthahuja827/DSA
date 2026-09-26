// horizontal scanning
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			string ans=str[0];
            for(int i=0;i<str.size();i++){
                int j=0;
                while(j<ans.size() && j<str[i].size() && ans[j]==str[]){
                    j++;
                }
                ans=ans.substr(0,j);
            }
            if(ans=="") break;
		}
};
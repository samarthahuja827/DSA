class Solution {
  public:
    int maxLen(vector<int>& arr) {
        unordered_map<int,int> mp;
        int prefix_sum=0,ans=0;
        for(int i=0;i<arr.size();i++){
            prefix_sum=prefix_sum+arr[i];
            if(prefix_sum==0){
                ans=i+1;
            }
            else{
                if(mp.find(prefix_sum)==mp.end()){ //not exist already so insert in map
                    mp[prefix_sum]=i;
                }
                else{ // already exist in map
                    ans=max(ans,i-mp[prefix_sum]); // current index - prev index when sum was 0 as prefix sum remains same
                }
            }
        }
        return ans;
    }
};
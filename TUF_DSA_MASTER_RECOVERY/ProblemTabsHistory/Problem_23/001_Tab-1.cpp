class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        set<int> ans;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){ // didnt understand why not j=i se start?
                if(nums[j]==nums[i]) count++;
            }
            if(count>nums.size()/3) ans.insert(nums[i]);
            // we can use if(ans.size()==2) break; as it can have atmax 2 elements u can check 
        }
        return vector<int>(ans.begin(),ans.end()); // for converting map into vector as we need to return vector
    }
};
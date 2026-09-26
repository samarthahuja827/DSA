class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map
        unordered_map<int, int> mp;
      
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int second=target-nums[i];
            if(mp.find(second)!=mp.end()){ // ie, mp.end means not found so != ie FOUND
                return {mp[second],i} // index of second value and current index returned
            }
            mp[first]=i; // key:value
        }
    }
};
// as index is to be returned it is treated as value
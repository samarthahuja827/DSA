class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++; // store in map
        }
        for(auto z:mp){
            if(z.second>nums.size()/2){
                return z.first;
            }
        }
    }
};
// can also do sort and then count freq =====> nlogn
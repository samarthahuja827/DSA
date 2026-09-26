class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int xr=0,count=0;
        unordered_map<int,int> mp;
        mp[xr]++; // (0,1)
        for(int i=0;i<nums.size();i++){
            xr=xr^nums[i];
            int x=xr^k;
            count=count+mp[x];
            mp[xr]++;
        }
        return count;
    }
};
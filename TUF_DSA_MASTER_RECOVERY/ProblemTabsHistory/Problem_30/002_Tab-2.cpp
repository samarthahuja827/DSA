class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> v;
        int mx = nums[nums.size() - 1];
        v.push_back(mx);

        for (int i = nums.size() - 2; i >= 0; i--) {
            // mx=max(mx,nums[i]); // v.push_back(mx); wrong approach as it will have repeating elements
            if (nums[i] > mx) {   // or >= depending on the problem statement
                v.push_back(nums[i]);
                mx = nums[i];
            }
        }

        reverse(v.begin(), v.end());
        return v;
    }
};
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        // STL
        return upper_bound(nums.begin(),nums.end(),x)-nums.begin();
    }
};
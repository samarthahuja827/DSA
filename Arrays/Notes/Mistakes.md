//Second largest element
```cpp
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-2];
    }
};
```

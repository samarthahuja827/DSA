Second largest element
```cpp
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-2];
    }
};
//Not crct for duplicates
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest =nums[0];
        int seclargest =nums[0];
        for(int i =1;i<nums.size();i++){
            if(largest<nums[i]) {largest=nums[i];}
        }
        for(int i =1;i<nums.size();i++){
            if(seclargest<nums[i] && largest>nums[i]) {seclargest=nums[i];}
        }
    }
};
```


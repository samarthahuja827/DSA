SECOND LARGEST ELEMNT (DUPLICATES ALLOWED)
```cpp
class Solution {
    public: int secondLargestElement(vector < int > & nums) {
        int largest = nums[0];
        int seclargest = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (largest < nums[i]) {
                seclargest = largest;
                largest = nums[i];
            }
            else if (seclargest < nums[i] && largest >= nums[i])
            {
                seclargest = nums[i];
            }
        }
        return seclargest;
    }
};
```

// Problem: Largest Element in Array
// Platform: Striver
// Link: https://takeuforward.org/plus/dsa/problems/largest-element
// Difficulty: Easy

// BRUTE FORCE
// TC: O(Nlog(N))
// SC: O(1)
class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-1];
    }
};

// OPTIMAL (My Approach)
// TC: O(N)
// SC: O(1)
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest=nums[0];
        for(int i=1;i<=nums.size();i++) {
         if(nums[i]>largest) {largest = nums[i];}
       }
       return largest;
    }
};

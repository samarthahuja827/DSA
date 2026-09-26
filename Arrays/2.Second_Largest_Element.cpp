// Problem: Largest Element in Array
// Platform: Striver, GFG
// Link: https://takeuforward.org/plus/dsa/problems/second-largest-element , https://www.geeksforgeeks.org/problems/second-largest3735/1
// Difficulty: Easy (Tricky acc to me)
// SECOND LARGEST ELEMENT DUPLICATES NOT ALLOWED
class Solution {
    public: int secondLargestElement(vector < int > & nums) {
        int largest = nums[0];
        int seclargest = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (largest < nums[i]) {
                seclargest = largest;
                largest = nums[i];
            }
            else if (seclargest < nums[i] && largest > nums[i])
            {
                seclargest = nums[i];
            }
        }
        if (seclargest == INT_MIN){seclargest=-1;}
        return seclargest;
    }
};
// TC=O(N)
// SC=O(1)

//SECOND LARGEST ELEMNT DUPLICATES ALLOWED
class Solution {
    public: int secondLargestElement(vector < int > & nums) {
        int largest = nums[0];
        int seclargest = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (largest < nums[i]) {
                seclargest = largest;
                largest = nums[i];
            }
            else if (seclargest < nums[i] && largest > nums[i])
            {
                seclargest = nums[i];
            }
        }
        return seclargest;
    }
};
// TC=O(N)
// SC=O(1)

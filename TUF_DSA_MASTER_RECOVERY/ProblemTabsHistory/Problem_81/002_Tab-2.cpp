class Solution{
public:
    int search(vector<int> &nums, int target){
    //  binary search using 
    int low=0;
    int high=nums.size()-1;
    
    while(low<=high){

        int mid=(low+high)/2;

        if(nums[mid]>target){
            high=low-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else if(nums[mid]==target){
            return mid;
        }
    }
    return -1;
    }
};
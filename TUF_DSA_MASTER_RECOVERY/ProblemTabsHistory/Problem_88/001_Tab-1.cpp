class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
      int low=0;
      int mid;
      int high=nums.size()-1;
      while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==k) return 1;

        // main condition when all 3 r same so we dont know what is sorted hence we trim, we use continue as there might be multiple layer of duplicates, so recheck
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        // left sorted
        if(nums[low]<=nums[mid]){
            if(nums[low]<=k && k<nums[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        // right sorted
        else{
            if(nums[mid]<k && k<=nums[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
      }
      return 0;
    }
};
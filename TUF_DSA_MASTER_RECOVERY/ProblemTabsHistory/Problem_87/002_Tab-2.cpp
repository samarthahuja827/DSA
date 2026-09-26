class Solution {
public:
    int search(vector<int> &nums, int k) {
       int low=0;
       int high=nums.size()-1;
       int mid;
       while(low<=high){
        mid=(low+high)/2;

        if(nums[mid]==k) return mid;

        // left side is sorted
        if(nums[low]<=nums[mid]){ 
            if(nums[low]<=k && k<nums[mid]){ // left half from mid 
            high=mid-1;
            }
            else{ // right half from mid
            low=mid+1;
            }
        }

        // right side is sorted
        else{  // nums[mid]<=nums[high]
            if(nums[mid]<k && k<=nums[high]){  
            low=mid+1;
            }
            else{ 
                high=mid-1;
            }
        }
       }
       return -1;
    }
};
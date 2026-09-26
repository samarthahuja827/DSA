class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n=nums.size();
        int low=1; //we trimmed down to avoid boundary conditions in binary search
        int high=n-2;
        int mid;

        // boundary conditions
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];

        while(low<=high){

            mid=(low+high)/2;
            
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            // elem is on right if (prev,curr)=(even,odd) eleminate left half [normal pairing]
            if((nums[mid-1]==nums[mid] && mid%2==1) || (nums[mid]==nums[mid+1] && mid%2==0)){
                low=mid+1;
            }
            else{ // we r on right eleminate right half
                high=mid-1;
            }

        }
    }
};
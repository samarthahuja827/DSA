class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int biggest=nums[0];
        int biggest2 =nums[0];
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>biggest){
                biggest2=biggest;
                biggest=nums[i];
            }
        }
        // if(biggest==nums[0] && nums[n-1]!=nums[0]){
        //     for(int i=0;i<=n-1;i++){
        //         if(nums[i]>biggest2 && biggest>biggest2){
        //             biggest2=nums[i];
        //         }
        //     }
        // }
        if(biggest==nums[0] && biggest2==nums[0]){
            return -1;
        }
        
        return biggest2;
    }
};
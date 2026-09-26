class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),nums.end());
        int low=1;
        int high=nums.back()-nums[0];
        while(low<=high){
            int mid=(low+high)/2;
            int cows=1;
            int prev=nums[0];
            
            for(int i=1;i<nums.size();i++){ //iterating distances
                if(nums[i]-prev>=mid){ // check if mid works and place cow
                    cows++; 
                    prev=nums[i];
                }
                if(cows>=k) break; //the optimization is that if we found cows=k stop finding more cows (can also use ==)
            }
            if(cows>=k){ // works try bigger distance, move right
                low=mid+1;
            }
            else{ // move left, try smaller distance
                high=mid-1;
            }
        }
        return high;
    }
};
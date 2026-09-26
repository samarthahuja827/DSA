class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),nums.end());
        
        int high=nums.back()-nums[0]; //max-min elem
        int ans;

// iterate MIN DISTANCE from 1---->(max-min elem)
        for(int dist=1;dist<=high;dist++){
            int cows=1;
            int prev=nums[0]; // place first cow at nums[0]

            for(int i=1;i<nums.size();i++){ // find position to place next cow atleast min distance apart from prev
                if(nums[i]-prev>=dist){
                    cows++;
                    prev=nums[i];
                }
            }
            if(cows>=k) ans=dist; // return last minimum distance
            else break;
        }
        return ans;
    }
};
// optimal
class Solution {
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
    int low=1;
    int high=*max_element(nums.begin(),nums.end());
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        int hours=0;
        for(int pile:nums){
            hours=hours+ceil((double)pile/mid); // (pile + mid - 1) / mid instead of ceil
        }
        if(hours<=h){ // works, check for smaller value, trim the bigger values
            high=mid-1;  // can write ans=mid before it if u return ans
        }
        else{
            low=mid+1; // smaller ones are unneccesary so trim left
        }
    }
    return low;
    }
};

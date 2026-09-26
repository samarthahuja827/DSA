// brute
// inner loop calculates total hours at each individual pile by trying different speed at each iteration
// outer loop varies speed from 1-->maxPile
class Solution {
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
    int maxPile=*max(nums.begin(),nums.end());
    for(int i=1;i<=maxPile;i++){ // i is speed
        int hours=0;
        for(int pile:nums){ 
            hours=hours+ceil((double)pile/i);
        }
        if(hours<=h) return i;
    }
    return -1;
    }
};

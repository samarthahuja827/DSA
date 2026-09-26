class Solution {
public:
int roseGarden(int n,vector<int> nums, int k, int m) {

   if(1LL*m*k>n){ // more flowers required for bouquets than present in nums
    return -1;
   }

   int minDay=*min_element(nums.begin(),nums.end());
   int maxDay=*max_element(nums.begin(),nums.end());

    for(int day=minDay;day<=maxDay;day++){
        int flowers=0;
        int bouquets=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=day) {flowers++; // rose bloomed
                if(flowers==k) { // bouquet complete
                    bouquets++;
                    flowers=0;
                }
            }
            else flowers=0; // adjacency broken
        }
        if(bouquets>=m) return day;
    }
    return -1;
  }
};
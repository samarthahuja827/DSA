class Solution {
public:
int roseGarden(int n,vector<int> nums, int k, int m) {
   if(1LL*m*k>n){ //more flowers than present in nums reqd
    return -1;
   }

   int low=*min_element(nums.begin(),nums.end());
   int high=*max_element(nums.begin(),nums.end());
   while(low<=high){
    int mid=(low+high)/2;
    int flowers=0;
    int bouquets=0;
    // loop for bouquets formation
    for(int i=0;i<n;i++){ //check how many bouquets possible on DAY= mid
        if(nums[i]<=mid){ // bloomed
            flowers++;
            if(flowers==k){
                bouquets++;
                flowers=0;
            }
        }
        else{
            flowers=0; //break adjacency
        }
    }
    if(bouquets>=m){ // bouquets more than or = required at 
        high=mid-1;
    }else{
        low=mid+1;
    }
   }
   return low;
  }
};
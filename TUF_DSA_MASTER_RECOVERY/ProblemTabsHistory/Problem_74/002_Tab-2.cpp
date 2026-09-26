class Solution {
public:
    int findPages(vector<int> &nums, int m)  {
        if(m>nums.size()) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int x:nums){
            high+=x;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int students=1;
            int pages=0;
            for(int x:nums){
                if(pages+x<=mid){
                    pages+=x;
                }
                else{
                    students++;
                    pages=x;
                }
            }
            if(students<=m){ //works, try smaller value
                high=mid-1;
            }
            else{ // not valid, try bigger
                low=mid+1;
            }
        }
        return low;
    }
};
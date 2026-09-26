class Solution {
public:
    int findPages(vector<int> &nums, int m)  {
        if(m>nums.size()) return -1; // students>books present
        int mn=*max_element(nums.begin(),nums.end());
        int mx=0;
        for(int x: nums){
            mx+=x;
        }
        for(int limit=mn;limit<=mx;limit++){
            int students=1;
            int pages=0;
            for(int x:nums){
                if(pages+x<=limit){
                    pages+=x;
                }
                else{
                    students++;
                    pages=x;
                }
            }
            if(students<=m) return limit;
        }
        return -1;
    }
};
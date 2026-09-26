class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.behin(),weights.end());
        int total=0;
        for(int w:weights){
            total+=w;
        }
        int high=total;
        int mid;
        while(low<=high){
            int mid=(low+high)/2;
            int day=1;
            int load=0;
            // this loop is to allot load to days
            for(int w: weights){
                load+=w;
                if(load+w<=mid){
                    load+=w;
                }
                else{
                    day++;
                    load=w;
                }
            }
            // now check if day (capacity) works?
            if(day<=days){ // works, find smaller if available
                high=mid-1;
            }
            else{
                low=mid+1; // does not work find on right
            }
        }
        return low;
    }
};
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxWeight=*max_element(weights.begin(),weights.end());
        int totalWeight=0;
        // find total weight
        for(int i=0;i<weights.size();i++){
            totalWeight+=weights[i];
        }
        // max elem----> totalWeight
        for(int capacity=maxWeight;capacity<=totalWeight;capacity++){
            int day=1;
            int load=0;
            // allot load to day
            for(int w:weights){
                if(load+w<=capacity){
                    load+=w;
                }
                else{
                    day++;
                    load=w;
                }
            }
            // calculated days <= actual days 
            if(day<=days) return capacity;
        }
        return -1;
    }
};
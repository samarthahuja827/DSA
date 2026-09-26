class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        // brute
        int max_profit=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int current_profit=arr[j]-arr[i];
                max_profit=max(max_profit,current_profit);
            }
        }
        return max_profit;
    }
};


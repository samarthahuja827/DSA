class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
       int buy=arr[0], current_profit=0, max_profit=0; // buy is minimum price
       for(int i=1;i<arr.size();i++){
        current_profit=arr[i]-buy;
        max_profit=max(max_profit,current_profit);
        buy=min(arr[i],buy);
       } 
       return max_profit;
    }
};


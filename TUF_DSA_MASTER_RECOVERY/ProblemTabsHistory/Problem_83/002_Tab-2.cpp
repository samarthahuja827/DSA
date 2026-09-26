class Solution {
public:
    int findMin(vector<int> &arr)  {
      int low=0,high=arr.size()-1;
      int mn=INT_MAX;
      while(low<=high){
        mid=(low+high)/2;

        // optimization
        if(arr[low]<=arr[high]){
            mn=min(mn,arr[low]);
            break;
        }
        if(arr[low]<=arr[mid]){
            mn=min(mn,arr[low]);
            low=mid+1;
        }
        else{
            mn=min(mn,arr[mid]);
            high=mid-1;
        }
      }
      return mn;
    }
};
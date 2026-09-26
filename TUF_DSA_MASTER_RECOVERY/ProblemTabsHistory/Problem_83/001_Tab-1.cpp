class Solution {
public:
    int findMin(vector<int> &arr)  {
      int low=0;
      int mid;
      int high=arr.size()-1;
      int mn= INT_MAX;
      while(low<=high){
        mid=(low+high)/2;

        // left is sorted
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
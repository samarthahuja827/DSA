class Solution {
public:
        // last occ - first occ + 1

        int lastocc(vector<int>&arr,int target){
            int low=0;
            int high=arr.size()-1;
            int mid;
            int ans=-1;
            while(low<=high){
                mid=(low+high)/2;
                if(target==arr[mid]){
                    ans=mid;
                    low=mid+1; //move right
                }
                else if(target<arr[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return ans;
        }

        int firstocc(vector<int>&arr,int target){
            int low=0;
            int high=arr.size()-1;
            int mid;
            int ans=-1;
            while(low<=high){
                mid=(low+high)/2;
                if(target==arr[mid]){
                    ans=mid;
                    high=mid-1; //move left
                }
                else if(target<arr[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return ans;
        }
        int countOccurrences(vector<int>& arr, int target) {
            int l=lastocc(arr,target);
            int f=firstocc(arr,target);
            if(f==-1) return 0;
            return l-f+1;
        }
};
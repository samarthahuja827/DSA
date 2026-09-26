class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // merge from the back
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];j--;
            }
            k--;
        }
        while(j>=0){ // i khatam but j mei elements baaki h
            nums1[k]=nums2[j];
            j--;
            k--;
        } // agr j khtm but i mei elements h (ie i>=0) to already sort hogya h
    }
};
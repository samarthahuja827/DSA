class Solution {
public:

    long long merge(vector<int>& nums, int low, int mid, int high) {
        long long count = 0;

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        while(i <= mid && j <= high) {

            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                count += (mid - i + 1); // .
                j++;
            }
        }

        // Remaining elements of left half
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Remaining elements of right half
        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy sorted elements back into nums
        for(int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }
        return count;
    }


    long long mergeSort(vector<int>& nums, int low, int high) {
        long long count = 0; //.

        if(low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        // Sort left half
        count+=mergeSort(nums, low, mid);//.

        // Sort right half
        count+=mergeSort(nums, mid + 1, high);//.

        // Merge both sorted halves
        count+=merge(nums, low, mid, high);//.
        return count;
    }


    
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n - 1);
    }
};
class Solution {
public:

    int countPairs(vector<int> &nums, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;

        for(int i = low; i <= mid; i++) {

            while(right <= high &&
                  (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }

            count += right - (mid + 1);
        }

        return count;
    }

    void merge(vector<int>& nums, int low, int mid, int high) {

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
                j++;
            }
        }

        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }
    }

    int mergeSort(vector<int>& nums, int low, int high) {

        if(low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        int count = mergeSort(nums, low, mid);

        count += mergeSort(nums, mid + 1, high);

        // Count reverse pairs between the two sorted halves
        count += countPairs(nums, low, mid, high);

        // Normal merge
        merge(nums, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
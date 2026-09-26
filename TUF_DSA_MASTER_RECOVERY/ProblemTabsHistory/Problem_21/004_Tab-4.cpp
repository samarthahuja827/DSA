// mathematical approach
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();

        long long S = 0, S2 = 0; // actual

        long long SN = (n * (n + 1)) / 2; // expected
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

        for(int i = 0; i < n; i++) {
            S += nums[i];
            S2 += (long long)nums[i] * nums[i];
        }

        long long diff = S - SN;       // x - y
        long long diff2 = S2 - S2N;    // x² - y²

        diff2 = diff2 / diff;          // x + y

        long long x = (diff + diff2) / 2;
        long long y = x - diff;

        return {(int)x, (int)y};
    }
};

// xor approach
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();
        int xr=0;
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
            xr=xr^(i+1);
        }
        int bit=xr & -xr;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(nums[i] & bit){
                one=one^nums[i];
            }else{
                zero=zero^nums[i];
            }
        }
        for(int i=1;i<=n;i++){
            if(i & bit){
                one=one^i;
            }else{
                zero=zero^i;
            }
        }
        int count=0;
        for(int x:nums){
            if(x==one) count++;
        }
        if(count==2) return {one,zero};
        else return {zero,one};
    }
};
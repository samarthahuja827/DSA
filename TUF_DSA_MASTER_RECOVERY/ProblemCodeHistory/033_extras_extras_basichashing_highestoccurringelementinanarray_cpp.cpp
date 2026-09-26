class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        // Step 1: Count frequencies
        for (int x : nums) {
            freq[x]++;
        }
        int maxFreq = 0;
        int answer = INT_MAX;
        // Step 2: Find element with highest frequency
        for (auto &p : freq) {
            int element = p.first;
            int count = p.second;
            if (count > maxFreq) {
                maxFreq = count;
                answer = element;
            }
            else if (count == maxFreq) {
                answer = min(answer, element);
            }
        }

        return answer;

    }
};
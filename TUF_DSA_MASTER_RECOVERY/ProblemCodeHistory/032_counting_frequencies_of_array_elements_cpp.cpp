class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> freq;
        // Count frequencies
        for (int x : nums) {
            freq[x]++;
        }
        // Store result
        vector<vector<int>> result;
        for (auto &p : freq) {
        result.push_back({p.first, p.second});
        }
        return result;
        
    }
};
class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;  // Kakashi’s memory sharing scroll
        long long ans = 0, pairs = 0;
        int left = 0;

        // Naruto keeps running ahead
        for (int right = 0; right < nums.size(); ++right) {
            int val = nums[right];

            // Count how many shadow clones already exist for this value
            pairs += freq[val];
            freq[val]++;

            // If pair count is enough, shrink from the left
            while (pairs >= k) {
                ans += nums.size() - right;  // All endings from here are good
                int out = nums[left++];
                freq[out]--;
                pairs -= freq[out]; // Reduce support from outgoing value
            }
        }
        return ans;
    }
};
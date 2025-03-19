class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int i=2;
        int count = 0;
        while(i<n) {
            if (nums[i-2] == 0) {
                nums[i] = (!nums[i]);
                nums[i - 1] = (!nums[i - 1]);
                nums[i - 2] = (!nums[i - 2]);
                count++;
            }
            i++;
        }
        for (auto& i : nums)
            if (i == 0)
                return -1;
        return count;
    }
};
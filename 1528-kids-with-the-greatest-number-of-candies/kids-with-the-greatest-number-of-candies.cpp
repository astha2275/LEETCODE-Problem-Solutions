class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int flag = 0;
        vector<bool> ans;
        for (int i = 0; i < n; i++) {
            int curr = candies[i] + extraCandies;
            for (int i = 0; i < n; i++) {
                if (curr >= candies[i])
                    flag = 1;
                else{
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
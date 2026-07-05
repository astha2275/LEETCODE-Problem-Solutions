class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;

        int cs = 0, rs = 0, n = mat.size() - 1, m = mat[0].size() - 1;
        while (cs <= m && rs <= n) {
            // Up side
            for (int i = cs; i <= m; i++) {
                ans.push_back(mat[rs][i]);
            }
            rs++;

            //Right side
            for (int i = rs; i <= n; i++) {
                ans.push_back(mat[i][m]);
            }
            m--;

            // Left side
            if (rs <= n) {
                for (int j = m; j >= cs; j--) {
                    ans.push_back(mat[n][j]);
                }
                n--;
            }

            // Up side
            if (cs <= m) {
                for (int i = n; i >= rs; i--) {
                    ans.push_back(mat[i][cs]);
                }
                cs++;
            }
        }
        return ans;
    }
};
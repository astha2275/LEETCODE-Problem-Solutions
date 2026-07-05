class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int a=1;
        int row=n,col=n;
        vector<vector<int>>mat(row,vector<int>(col));
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                mat[top][i]=a++;
            }
            top++;
            if(top<=bottom && left<=right){
            for(int i=top;i<=bottom;i++){
                mat[i][right]=a++;
            }
            }
            right--;
            if(top<=bottom && left<=right){
            for(int i=right;i>=left;i--){
                mat[bottom][i]=a++;
            }
            }
            bottom--;
            if(top<=bottom && left<=right){
            for(int i=bottom;i>=top;i--){
                mat[i][left]=a++;
            }
            }
            left++;
        }
        return mat;
    }
};
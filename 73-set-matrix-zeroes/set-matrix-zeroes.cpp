class Solution {
public:
    void updateRow(vector<vector<int>>& matrix, int row, int& firstVoid){
        bool zero = false;
        for(int i = 0; i < matrix[row].size(); i++){
            if(matrix[row][i] == 0){
                zero = true;
            }
        }

        if(zero == false){
            return;
        }

        if(firstVoid == -1){
            firstVoid = row;
        }

        for(int i = 0; i < matrix[row].size(); i++){
            if(matrix[row][i] == 0){
                matrix[firstVoid][i] = 1;
            }else{
                matrix[row][i] = 0;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int firstVoid = -1;
        for(int i = 0; i < matrix.size(); i ++){
            updateRow(matrix, i, firstVoid);
        }
        if(firstVoid == -1){
            return;
        }
        for(int j = 0; j < matrix[0].size(); j ++){
            if(matrix[firstVoid][j] != 1){
                continue;
            }
            for(int k = 0; k < matrix.size(); k++){
                matrix[k][j] = 0;
            }
        }
    }
};
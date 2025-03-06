class Solution {
public:
bool is_safe(int row, int col, vector<vector<char>>& board, int val){
    //checking by row and colum wise
    for(int i=0; i<board.size(); i++){
        if(board[row][i]==val || board[i][col]==val){
            return false;
        }
        //checking 3X3 matrix wise (box wise)
        if(board[3*(row/3)+i/3][3*(col/3)+i%3] == val){
            return false;
        }
    }
    return true;
}
    bool solve(vector<vector<char>>& board) {
        int n = board.size();

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {

                // checking empty cells

                if (board[row][col] == '.') {

                    // loop for filling any value bw 1 to 9 in empty cell

                    for (char val = '1'; val <= '9'; val++) {
                        if (is_safe(row, col, board, val)) {
                            board[row][col] = val;

                            // recursive call for verifying and filling other
                            // cells.

                            bool more_solution_poss = solve(board);

                            if (more_solution_poss)
                                return true;
                            else {
                                // backtracking here (because maybe any value
                                // might be wrong filled so filling value as
                                // zero in that cell)
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
class Solution {
public:
    bool check(int i, int j, int n, int m, vector<vector<char>>& board) {
        if(i == n)
            return true;

        if(j == m)
            return check(i + 1, 0, n, m, board);

        if(board[i][j] == '.')
            return check(i, j + 1, n, m, board);

        char num = board[i][j];

        for(int k = 0; k < 9; k++) {
            if(k != i && board[k][j] == num)
                return false;
        }

        for(int k = 0; k < 9; k++) {
            if(k != j && board[i][k] == num)
                return false;
        }

        int row = (i / 3) * 3;
        int col = (j / 3) * 3;

        for(int r = row; r < row + 3; r++) {
            for(int c = col; c < col + 3; c++) {
                if((r != i || c != j) && board[r][c] == num)
                    return false;
            }
        }

        return check(i, j + 1, n, m, board);
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return check(0, 0, 9, 9, board);
    }
};
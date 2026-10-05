class Solution {
public:
    bool solve(int i,int j,int k,int n,int m,int w,string &word,
               vector<vector<char>>& board){

        if(k==w)
            return true;

        char temp=board[i][j];
        board[i][j]='#';

        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};

        for(int g=0;g<4;g++){
            int nr=i+dr[g];
            int nc=j+dc[g];

            if(nr>=0 && nr<n && nc>=0 && nc<m &&
               board[nr][nc]==word[k]){

                if(solve(nr,nc,k+1,n,m,w,word,board)){
                    board[i][j]=temp;
                    return true;
                }
            }
        }

        board[i][j]=temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int w=word.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(solve(i,j,1,n,m,w,word,board))
                        return true;
                }
            }
        }

        return false;
    }
};
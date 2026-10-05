class Solution {
public:
    vector<string> res;
    void solve(int open, int close, int n, string ans) {
        if(ans.size() == 2*n) {
            res.push_back(ans);
            return;
        }
        if(open < n) {
            solve(open + 1, close, n, ans + '(');
        }
        if(close < open) {
            solve(open, close + 1, n, ans + ')');
        }
    }
    vector<string> generateParenthesis(int n) {
        string ans = "";
        solve(0, 0, n, ans);
        return res;
    }
};
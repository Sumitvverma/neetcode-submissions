class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        
        sort(strs.begin(),strs.end());
        if(strs[0]==strs[n-1]) return strs[0];
        string ans="";
        int i=0;
        while(strs[0][i]==strs[n-1][i]){
            ans+=strs[0][i];
            i++;
        }
        return ans;
    }
};
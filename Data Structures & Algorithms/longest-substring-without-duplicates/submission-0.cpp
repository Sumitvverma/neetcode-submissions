class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0,len=0;
         unordered_map<char,int>mp;
            while(j<n){
                mp[s[j]]++;
                if(mp[s[j]]==1)len=max(len,j-i+1);
                else {
                    while(mp[s[j]]!=1){
                    mp[s[i]]--;
                    i++;}
                }
                j++;
            }
        return len;
    }
};

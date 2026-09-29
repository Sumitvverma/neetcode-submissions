class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size(),m=s1.size();
        unordered_map<char,int>mp;
        for(char c: s1){
            mp[c]++;
        }
        for(int i=0;i<n;i++){
            unordered_map<char,int>freq;
            for(int j=i;j<n&&j<i+m;j++){
                freq[s2[j]]++;
            }
            if(freq==mp) return true;
        }
        return false;
    }
};

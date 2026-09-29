class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp,freq;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            freq[c]++;
        }
        return mp==freq;
    }
};

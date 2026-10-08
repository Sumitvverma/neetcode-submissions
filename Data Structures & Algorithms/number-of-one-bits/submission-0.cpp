class Solution {
public:
    int hammingWeight(uint32_t n) {
       bitset<32> bits(n);
       string s = bits.to_string();
       int cnt=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='1') cnt++;
       }
       return cnt;
    }
};

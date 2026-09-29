class Solution {
public:
    string minWindow(string s, string t) {

        int n=s.size(),m=t.size();

        if(m>n) return "";

        unordered_map<char,int> freq,mp;

        for(char c:t)
            freq[c]++;

        int j=0,i=0;
        int count=0;
        int start=0,len=INT_MAX;

        while(j<n){

            mp[s[j]]++;

            if(freq[s[j]]>=mp[s[j]])
                count++;

            while(count==m){

                if(j-i+1<len){
                    len=j-i+1;
                    start=i;
                }

                mp[s[i]]--;

                if(freq[s[i]]>mp[s[i]])
                    count--;

                i++;
            }

            j++;
        }

        if(len==INT_MAX)
            return "";

        return s.substr(start,len);
    }
};

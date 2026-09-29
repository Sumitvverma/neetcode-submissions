class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int>start;
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-1)==mp.end())start.push_back(nums[i]);
        }
        int maxcount=0;
        for(int i=0;i<start.size();i++){
            int num=start[i],cnt=0;

            while(mp.find(num+1)!=mp.end()){
                 cnt++;
                 num++;}
            maxcount=max(cnt,maxcount);
        }
        return maxcount+1;
    }
};

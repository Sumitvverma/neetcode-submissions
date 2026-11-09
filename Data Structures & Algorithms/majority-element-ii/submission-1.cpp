class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        set<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>n/3) ans.insert(nums[i]);
        }
        vector<int>s(ans.begin(),ans.end());
return s;
    }
};
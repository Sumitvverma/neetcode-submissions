class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num=nums[0];
        unordered_map<int,int>mp;
        for( int i : nums){
            mp[i]++;
            if(mp[i]>mp[num]) num=i;
        }
        return num;
    }
};
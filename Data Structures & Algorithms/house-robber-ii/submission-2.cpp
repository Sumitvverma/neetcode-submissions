class Solution {
public:
    vector<int>dp;
    int solve(int i,vector<int>&nums){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(solve(i+1,nums),nums[i]+solve(i+2,nums));
    }

    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        vector<int>nums1(nums.begin()+1,nums.end());
        vector<int>nums2(nums.begin(),nums.end()-1);
        dp.assign(nums1.size(), -1);
        int a = solve(0, nums1);

        dp.assign(nums2.size(), -1);
        int b = solve(0, nums2);

        return max(a, b);
    }
};

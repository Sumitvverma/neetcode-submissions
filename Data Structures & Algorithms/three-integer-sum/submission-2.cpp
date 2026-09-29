class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;

            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;

                int k=n-1;

                if(nums[i]+nums[j]+nums[k]==0 && i!=j && j!=k && k!=i)
                    ans.push_back({nums[i],nums[j],nums[k]});
                else {
                    while(k>j && nums[i]+nums[j]+nums[k]>0)
                        k--;

                    if(k>j && nums[i]+nums[j]+nums[k]==0)
                        ans.push_back({nums[i],nums[j],nums[k]});
                }
            }
        }

        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> ans;

    void solve(int i, int n, vector<int>& nums, int target, vector<int>& temp) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(i == n || target < 0)  return;

        temp.push_back(nums[i]);
        solve(i, n, nums, target - nums[i], temp);
        temp.pop_back();

        solve(i + 1, n, nums, target, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> temp;
        solve(0, n, nums, target, temp);
        return ans;
    }
};
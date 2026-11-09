class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size(),total=0;
        stack<int>st;
        for(int i=0;i< n;i++){
            if(st.empty()) st.push(nums[i]);
            else if(st.top()>nums[i]){
                st.pop();
                st.push(nums[i]);
            }
            else{
                total+=abs(st.top()-nums[i]);
                st.pop();
                st.push(nums[i]);
            }
        }
        return total; 
    }
};
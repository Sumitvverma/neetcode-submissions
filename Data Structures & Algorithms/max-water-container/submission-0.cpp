class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int maxwater=0,currentwater=0;
        while(i<j){
            currentwater=(min(heights[i],heights[j]))*(j-i);
            maxwater=max(maxwater,currentwater);
            if(heights[i]<heights[j])i++;
            else j--;
        }
        return maxwater;
    }
};

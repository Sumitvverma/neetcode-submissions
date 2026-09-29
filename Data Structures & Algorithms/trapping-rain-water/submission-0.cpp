class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),maxx=0,ans=0;
        vector<int>prefix(n,0),suffix(n,0),trappedWater;
        for(int i=0;i<n;i++){
            maxx=max(maxx,height[i]);
            prefix[i]=maxx;
        }
        maxx=0;
        for(int i=n-1;i>=0;i--){
            maxx=max(maxx,height[i]);
            suffix[i]=maxx;
        }
        for(int i=0;i<n;i++){
            trappedWater[i]=min(prefix[i],suffix[i])-height[i];
            ans+=trappedWater[i];
        }
        return ans;
    }
};

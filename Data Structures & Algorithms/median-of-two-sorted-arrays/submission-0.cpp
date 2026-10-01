class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),i=0,j=0;
        vector<double> ans;

        while(i<n || j<m){
            if(i<n && (j>=m || nums1[i]<nums2[j])){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        int size=ans.size();

        if(size%2!=0)
            return ans[size/2];
        else
            return (ans[size/2-1]+ans[size/2])/2.0;
    }
};
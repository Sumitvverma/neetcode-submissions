class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<vector<int>>ans;
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        for(int i=0;i<n;i++){
            int dist=0;
            dist+=((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
            pq.push({dist,points[i][0],points[i][1]});
        }
        for(int i=0;i<k;i++){
            ans.push_back({get<1>(pq.top()),get<2>(pq.top())});
            pq.pop();

        }
        return ans;
    }
};
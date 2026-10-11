class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
          vector<int> indegree(numCourses, 0);
        vector<vector<int>> adj(numCourses);
        vector<int> ans;
        for (auto& it : prerequisites) {
            indegree[it[0]]++;
            adj[it[1]].push_back(it[0]);
        }
 int finish=0;
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int node = q.front();
            q.pop();
           
            finish++;
            ans.push_back(node);
            for (int nei : adj[node]) {
                indegree[nei]--;
                if (indegree[nei] == 0) {
                    q.push(nei);
                }
            }
        }
        if (finish != numCourses) return {};
        return ans;
    }
};

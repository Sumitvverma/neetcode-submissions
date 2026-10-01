class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size(),count=0;
        vector<pair<int,double>>vec;
        stack<double>st;

        for(int i=0;i<n;i++){
            double time=(double)(target-position[i])/speed[i];
            vec.push_back({position[i],time});
        }

        sort(vec.begin(),vec.end());

        for(int i=n-1;i>=0;i--){
            if(st.empty() || vec[i].second>st.top()){
                st.push(vec[i].second);
                count++;
            }
        }

        return count;
    }
};
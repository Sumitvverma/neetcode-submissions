class Solution {
public:
    bool isHappy(int n) {
        int ans=n;
        unordered_set<int> st;

        while(ans!=1){
            if(st.count(ans))
                return false;

            st.insert(ans);

            int temp=ans;
            ans=0;

            while(temp>0){
                int num=temp%10;
                ans=ans+(num*num);
                temp/=10;
            }
        }

        return true;
    }
};
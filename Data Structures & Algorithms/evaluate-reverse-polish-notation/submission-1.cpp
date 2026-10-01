class Solution {
public:
    void solve(stack<int>&st,string s,int &ans){
        int b=st.top();
        st.pop();
        
        int a=st.top();
        st.pop();

        if(s=="+"){
            ans=a+b;
        }
        else if(s=="-"){
            ans=a-b;
        }
        else if(s=="*"){
            ans=a*b;
        }
        else{
            ans=a/b;
        }

        st.push(ans);
    }

    int evalRPN(vector<string>& tokens) {
        int ans=0,n=tokens.size();
        stack<int>st;
        
        for(int i=0;i<n;i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                solve(st,tokens[i],ans);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        
        return st.top();
    }
};
 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9){
            digits[n-1]+=1;
            return digits;
        }
        else{
            int i=n-1;
            while(i>=0){
                if(digits[i]==9) digits[i]=0;
                else{
                    digits[i]+=1;
                    break;
                }
                i--;
            }
        }
        if(digits[0]==0){
            vector<int>nums;
            nums.push_back(1);
            for(int i=0;i<digits.size();i++){
                nums.push_back(digits[i]);
            }
            return nums;
        }
        return digits;
    }
};

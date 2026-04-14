class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int zeros = 0;
        vector<int> ans;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
                zeros+=1;
            }
            else {
            total = total*nums[i];
            }
        }
        if(zeros>1){
            for(int i = 0; i < nums.size();i++){
                ans.push_back(0);
            }
            return ans;
        }
        if(zeros == 0){
        for(int a:nums){
            ans.push_back(total/a);
        }
        return ans;
        }
        else{
            for(int i = 0; i < nums.size();i++){
                if(nums[i]!=0) ans.push_back(0);
                else{
                    ans.push_back(total);
                }
            }
        }
        return ans;
    }
};

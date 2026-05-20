class Solution {
public:

    void back(vector<int>& nums, int target,int start,vector<vector<int>>& result,vector<int> c){
        if(target == 0) return result.push_back(c);
        if(target < 0) return;
        for(int i = start;i <nums.size();i++){
            c.push_back(nums[i]);
            back(nums,target-nums[i],i,result,c);
            c.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> c;
        back(nums,target,0,result,c);
        return result;
    }
};

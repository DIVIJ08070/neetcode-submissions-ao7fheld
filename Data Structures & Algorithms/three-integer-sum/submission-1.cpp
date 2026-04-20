class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> s;
       for(int i = 0; i < nums.size()-2;i++){
        for(int j = i+1; j < nums.size()-1;j++){
            for(int k = j+1; k < nums.size() ; k++){
                if(nums[i]+nums[k]+nums[j] == 0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
        }
        
       }
       vector<vector<int>> ans(s.begin(),s.end());
          return ans;
    }
};

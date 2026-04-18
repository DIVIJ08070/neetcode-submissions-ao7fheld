class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int sum = 1;
        int ans = 1;
        if (nums.empty()) return 0;
        set<int> sett;
        for(int i = 0 ; i < nums.size() ; i++){
            sett.insert(nums[i]);
        }
        vector<int> myVec(sett.begin(), sett.end());
        for(int i = 0; i < myVec.size()-1 ; i++){
            if(myVec[i+1]-myVec[i] == 1){
                sum++;
            }
            else{
                ans = max(ans,sum);
                sum = 1;
            }
        }
        return max(sum,ans);
    }
};

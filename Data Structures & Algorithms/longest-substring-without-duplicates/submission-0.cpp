class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxi = 0;
        set<int> se;
        while(right < s.size()){
            if(se.find(s[right]) == se.end()){
                maxi = max(maxi,right-left+1);
                se.insert(s[right]);
                right++;
            }
            else{
                se.erase(s[left]);
                left++;
            }
        }
        return maxi;
    }
};

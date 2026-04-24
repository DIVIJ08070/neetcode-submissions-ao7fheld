class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mp;
        int si = s.size();
        int r = 0;
        int l = 0;
        int mini = INT_MAX;
        int count = 0;
        string ans = "";
        int start1 = 0;
        for(char c:t){
            mp[c]+=1;
        }
        while(r < si){
            if(mp[s[r]] > 0){
                count++;
            }
            mp[s[r]]--;
            while(count == t.size()){
                if(r-l+1 < mini){
                    mini = r-l+1;
                    start1 = l;
                }
                 mp[s[l]]++;
                if(mp[s[l]] > 0){  
                    count--;
                }
                l++;
            }
            r++;
        }
        if(mini == INT_MAX){
            return "";
        }
        else{
            for(int i = start1;i < start1+mini; i++){
                ans += s[i];
            }
            return ans;
        }
    }
};

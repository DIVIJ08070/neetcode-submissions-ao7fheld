class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string clean = "";
        for(char c:s){
            if(isalnum(c)){
                clean+=c;
            }
        }
        string ans = "";
        for(char &c: clean){
            ans = c+ans;
        }
        cout<< ans;
        return ans == clean;
    }
};

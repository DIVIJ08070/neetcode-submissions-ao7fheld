class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> a;
        map<int,int> b;
        for(int i = 0 ; i < s.size() ; i++){
            a[s[i]]++;
        }
         for(int i = 0 ; i < t.size() ; i++){
            b[t[i]]++;
         }
        if(a == b){
            return true;
        }
        else{
            return false;
        }
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            // opening bracket
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // closing bracket
            else {
                if (st.empty() || st.top() != mp[c]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
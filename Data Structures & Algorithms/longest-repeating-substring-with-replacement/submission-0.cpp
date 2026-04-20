class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        
        int left = 0;
        int maxfreq = 0;
        int maxwindow = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            
            maxfreq = max(maxfreq, freq[s[right] - 'A']);

            int windowLength = right - left + 1;

            if (windowLength - maxfreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxwindow = max(maxwindow, right - left + 1);
        }

        return maxwindow;
    }
};
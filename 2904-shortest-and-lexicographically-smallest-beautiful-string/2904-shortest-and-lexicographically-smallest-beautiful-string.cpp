class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();

        string ans = "";
        int left = 0;
        int ones = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {

            if (s[right] == '1')
                ones++;

            while (ones == k) {

                int len = right - left + 1;
                string curr = s.substr(left, len);

                if (len < minLen) {
                    minLen = len;
                    ans = curr;
                }
                else if (len == minLen && curr < ans) {
                    ans = curr;
                }

                if (s[left] == '1')
                    ones--;

                left++;
            }
        }

        return ans;
    }
};
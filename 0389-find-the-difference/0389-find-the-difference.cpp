class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> h;

        for (char ch : s) {
            h[ch]++;
        }
        for (char ch : t) {
            if (h.find(ch) == h.end()) {
                return ch;
           }
            h[ch]--;
            if (h[ch] == 0) {
                h.erase(ch);
            }
        }
        return '\0';
    }
};

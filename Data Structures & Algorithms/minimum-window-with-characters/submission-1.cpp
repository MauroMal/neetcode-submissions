class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) { return ""; }

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for (char c : t){
            need[c]++;
        }

        int l = 0, start = 0, have = 0, required = need.size();
        int minLen = INT_MAX;

        for (int r = 0; r < s.size(); r++){
            window[s[r]]++;
            if (need.count(s[r]) && window[s[r]] == need[s[r]]) { have++; }
            
            while (have == required){
                if ((r - l + 1) < minLen) {

                    minLen = r - l + 1;

                    start = l;

                }
                window[s[l]]--;

                if (need.count(s[l]) && window[s[l]] < need[s[l]]) { have--; }

                l++;
            }
        }
        if (minLen == INT_MAX) return "";

        return s.substr(start, minLen);
    }
};

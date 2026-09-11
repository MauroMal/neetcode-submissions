class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s: strs) {
            vector<int> count(26, 0);
            for (char c : s){
                count[c - 'a']++;
            }
            string key;
            for (int freq : count){
                key += to_string(freq) + ',';
            }
            res[key].push_back(s);
        }
        vector<vector<string>> output;
        for (const auto& pair : res) {
            output.push_back(pair.second);
        }
        return output;
    }
};

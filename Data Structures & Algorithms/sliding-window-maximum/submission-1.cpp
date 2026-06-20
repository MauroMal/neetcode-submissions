class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (r - l + 1 == k) {
                res.push_back(*max_element(nums.begin() + l, nums.begin() + r + 1));
                l++;
            }
        }
        return res;
    }
};
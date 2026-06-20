class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> curr;
        vector<int> res;
        int l = 0;
        for (int r = 0; r < nums.size(); r++){
            curr.push_back(nums[r]);
            if ((r - l + 1) >= k){ 
                res.push_back(*max_element(curr.begin() + l, curr.begin() + r + 1));
                l++;
            }
        }
        return res;
    }
};

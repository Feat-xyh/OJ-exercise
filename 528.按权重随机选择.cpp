/*
 * @lc app=leetcode.cn id=528 lang=cpp
 *
 * [528] 按权重随机选择
 */

// @lc code=start
class Solution {
public:
    int sum = 0;
    vector<int> right;
    Solution(vector<int>& w) {
        sum = 0;
        right.push_back(sum);
        for (size_t i = 0; i < w.size(); ++i) {
            sum += w[i];
            right.push_back(sum);
        }
    }
    
    int pickIndex() {
        int randNum = (rand() % sum);
        for (size_t i = 0; i < right.size()-1; ++i) {
            if (randNum >= right[i] && randNum < right[i+1]) {
                return i;
            }
        }
        return right.size();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
// @lc code=end


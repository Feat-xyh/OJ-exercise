/*
 * @lc app=leetcode.cn id=1588 lang=cpp
 *
 * [1588] 所有奇数长度子数组的和
 */

// @lc code=start
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len = arr.size();
        int sum = 0;
        for (int curLen = 1; curLen <= len; curLen += 2) {
            for (int begin = 0; begin <= len-curLen; begin++) {
                for (int i = 0; i < curLen; i++) {
                    sum += arr[begin + i];
                }
            }
        }
        return sum;
    }
};
// @lc code=end


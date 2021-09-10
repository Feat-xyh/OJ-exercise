/*
 * @lc app=leetcode.cn id=1894 lang=cpp
 *
 * [1894] 找到需要补充粉笔的学生编号
 */

// @lc code=start
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long total = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= total;
        int res = -1;
        for (int i = 0; i < n; ++i) {
            if (chalk[i] > k) {
                res = i;
                break;
            }
            k -= chalk[i];
        }
        return res;
    }
};
// @lc code=end


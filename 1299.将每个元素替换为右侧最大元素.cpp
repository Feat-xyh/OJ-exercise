/*
 * @lc app=leetcode.cn id=1299 lang=cpp
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(), 0);
        ans[arr.size()-1] = -1;
        int maxNum = arr[arr.size()-1];
        for (int i=arr.size()-2; i >= 0; i--) {
            ans[i] = maxNum;
            maxNum = max(maxNum, arr[i]);
        }
        return ans;
    }
};
// @lc code=end


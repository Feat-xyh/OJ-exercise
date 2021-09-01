/*
 * @lc app=leetcode.cn id=165 lang=cpp
 *
 * [165] 比较版本号
 */

// @lc code=start
class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1;
        size_t pos = version1.find('.');
        while (pos != string::npos) {
            string s1 = version1.substr(0, pos);
            version1 = version1.substr(pos+1);
            pos = version1.find('.');
            v1.push_back(atoi(s1.c_str()));
        }
        if(version1.size()!=0)
            v1.push_back(atoi(version1.c_str()));

        vector<int> v2;
        pos = version2.find('.');
        while (pos != string::npos) {
            string s2 = version2.substr(0, pos);
            version2 = version2.substr(pos+1);
            pos = version2.find('.');
            v2.push_back(atoi(s2.c_str()));
        }
        if(version2.size()!=0)
            v2.push_back(atoi(version2.c_str()));

        if (v1.size()>v2.size()) {
            int len = v1.size()-v2.size();
            for (int i=0;i<len;i++) {
                v2.push_back(0);
            }
        }else if (v1.size()<v2.size()){
            int len = v2.size()-v1.size();
            for (int i=0;i<len;i++) {
                v1.push_back(0);
            }
        }
        for (int i=0; i<v1.size();i++) {
            if (v1[i]>v2[i]) {
                return 1;
            }
            if (v1[i]<v2[i]) {
                return -1;
            }
        }
        return 0;
    }
};
// @lc code=end


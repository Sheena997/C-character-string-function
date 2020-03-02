/*
28. 实现 strStr()
实现 strStr() 函数。
给定一个 haystack 字符串和一个 needle 字符串，
在 haystack 字符串中找出 needle 字符串出现的
第一个位置 (从0开始)。如果不存在，则返回  -1。
示例 1:
输入: haystack = "hello", needle = "ll"
输出: 2
示例 2:
输入: haystack = "aaaaa", needle = "bba"
输出: -1
来源：LeetCode
链接：https://leetcode-cn.com/problems/implement-strstr/
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        auto ret = haystack.find(needle);
        if(ret != string::npos)
            return ret - 0;
        else
            return -1;
    }
};
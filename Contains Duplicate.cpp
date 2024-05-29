/*
 * @Copyright: sunhongbin
 * @file name: hci-campus-web
 * @Data: 27-6-2022
 * @Describe: The project is designed to implement the mobile page of the official website of Shandong University School of Software
 */
/* 217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

*/

class Solution1 {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                return true;
            }
        }
        return false;
    }
};

#include <unordered_set>
class Solution2 {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            if (s.count(nums[i])) {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};
#include<bits/stdc++.h>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        std::set<int> se(nums.begin(), nums.end());

        int count = 1;
        int max_count = 1; // Khởi tạo max_count bằng 1

        auto it = se.begin();
        int pre_val = *it;

        for (++it; it != se.end(); ++it) {
            if (*it == pre_val + 1) {
                count++;
            } else {
                count = 1;
            }
            max_count = std::max(max_count, count);
            pre_val = *it; // Cập nhật pre_val
        }

        return max_count;
    }
};
#pragma once
#include <vector>
#include <unordered_set>
#include <algorithm>

namespace sol {

using std::vector;
using std::unordered_set;

class Solution {
public:
    bool containsDuplicateHashSet(vector<int>& nums) {
        unordered_set<int> seen;

        for(int elem: nums) {
            if(seen.count(elem) > 0) return true;
            else {
                seen.insert(elem);
            }
        }

        return false;
    }

    bool containsDuplicateSorting(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] == nums[i - 1]) return true;
        }

        return false;
    }

    bool containsDuplicateBubbleWithEarlyExit(vector<int>& nums) {
        size_t n = nums.size();
        for(size_t i = 0; i < n; ++i) {
            bool swapped = false;
            for(size_t j = 0; j < n - 1 - i; ++j) {
                if(nums[j] == nums[j + 1]) return true;

                if(nums[j] > nums[j + 1]) {
                    std::swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }

            if(!swapped) return false; // Early Exit
        }

        return false;
    }

    bool containsDuplicate(vector<int>& nums) {
        return containsDuplicateHashSet(nums);
    }
};

} // namespace sol

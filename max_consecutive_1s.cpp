https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;  // Variable to store the maximum consecutive ones count
        int currentCount = 0;  // Variable to store the current consecutive ones count

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                currentCount++;  // Increment current count for consecutive ones
            } else {
                currentCount = 0;  // Reset current count if the current element is 0
            }

            maxCount = max(maxCount, currentCount);  // Update max count if needed
        }

        return maxCount;
    }
};

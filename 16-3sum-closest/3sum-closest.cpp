class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    return sum;
                }

                if (abs(sum - target) < abs(close - target)) {
                    close = sum;
                }

                if (sum < target) {
                    left++;
                } else {
                    right--;  // ✅ FIXED: Decrease right, not increase
                }
            }
        }
        return close;
    }
};

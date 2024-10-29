class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = 0.0;
        int n = nums.size();

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            res += nums[i];
        }

        // Initial maximum average
        double maxAvg = res / k;

        // Iterate through the rest of the elements
        for (int i = k; i < n; i++) {
            // Update the sum by sliding the window
            res += nums[i] - nums[i - k];
            // Update maxAvg with the maximum average found so far
            maxAvg = max(maxAvg, res / k);
        }

        return maxAvg;
    }
};

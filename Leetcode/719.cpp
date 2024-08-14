class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        // Step 1: Sort the input array
        sort(nums.begin(), nums.end());

        // Step 2: Define binary search range
        int low = 0;  // smallest possible distance
        int high = nums.back() - nums.front();  // largest possible distance

        // Step 3: Binary search for the k-th smallest distance
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Step 4: Count the number of pairs with distance <= mid
            int count = 0;
            int j = 0;
            for (int i = 0; i < nums.size(); ++i) {
                while (j < nums.size() && nums[j] - nums[i] <= mid) {
                    j++;
                }
                count += j - i - 1;
            }

            // Step 5: Adjust binary search range based on count
            if (count < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};

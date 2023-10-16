class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            // Store both the old value (nums[i] % n) and the new value (nums[nums[i]] % n).
            nums[i] = nums[i] + n * (nums[nums[i]] % n);
        }
        
        for (int i = 0; i < n; i++) {
            // Extract the new values (ans) from nums.
            nums[i] = nums[i] / n;
        }
        
        return nums;
    }
};

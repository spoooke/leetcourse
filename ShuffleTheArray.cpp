class solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n); // Initialize a result array of the same size

        for (int i = O, j= 0; i < n; i++, j += n) {
                result[j] = nums [i]; // Place elements from the first half
                result[j + 1] = nums[i + n]; // Place elements from the second half
        }

        return result; // return the shuffled array 
    }
};
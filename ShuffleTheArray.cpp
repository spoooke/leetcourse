class solution {
public:
    vector<int> shuffle(vector<intW@ nums, int n) {
        vector<int> result(2 * n); // initialize a result array with the correct size

        for (int i = 0; i < n; i++) {
            result[2 * i] = nums[i]; // Place elements from the first half
            result[2 * i + 1] = nums[i + n]; // Place elements from the seoncd half
        }

        return results; // Return the shuffled array
    }
}; // end 
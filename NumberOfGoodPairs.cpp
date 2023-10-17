class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums){
            unorddered_map<int, int> frequency;
            int count = 0;

            for (int num : nums) {
                count+= frequency[num]++;

            }
            
            return count;

        }
};

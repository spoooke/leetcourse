class Solution {
public:
    int FinalValueAfterOperations(vector<string>& operations) {
        int X = 0; // Initialize X to 0

        for (const string& op : operations) {
            if (op == "++X" || op == "X++") {
                X++; // Increment X by 1
            } else if (op == "--X" || op == "X--") {
                X--; // decrement X by 1
            }
        }
    }

    return X; // return the final value of X
 };
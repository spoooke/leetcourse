#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // Create a max heap
        priority_queue<int> pq(gifts.begin(), gifts.end());
        
        // Process for k seconds
        while (k--) {
            int maxGifts = pq.top();
            pq.pop();
            // Calculate square root and push back
            int remaining = floor(sqrt(maxGifts));
            pq.push(remaining);
        }
        
        // Calculate sum of remaining gifts
        long long totalGifts = 0;
        while (!pq.empty()) {
            totalGifts += pq.top();
            pq.pop();
        }
        
        return totalGifts;
    }
};

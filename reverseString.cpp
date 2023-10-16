
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result;

        
        bool firstWord = true;

        while (ss >> word) {
            reverse(word.begin(), word.end());

            
            if (!firstWord) {
                result += " ";
            }
            result += word;

            
            firstWord = false;
        }

        return result;
    }
};
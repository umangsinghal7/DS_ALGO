class Solution {
public:
    void backtrack(int index, const string& digits, string& current, 
        const vector<string>& phoneMap, vector<string>& result) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        string letters = phoneMap[digits[index] - '0'];

        for (char c : letters) {
            current.push_back(c);                   
            backtrack(index + 1, digits, current, phoneMap, result);
            current.pop_back();                      
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> phoneMap = {
            "",     "",     "abc",  "def",
            "ghi",  "jkl",  "mno",         
            "pqrs", "tuv",  "wxyz"         
        };

        vector<string> result;
        string current = "";

        backtrack(0, digits, current, phoneMap, result);
        return result;
    }
};

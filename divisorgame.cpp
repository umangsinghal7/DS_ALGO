class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;   //The trick is that the answer depends only on whether n is even or odd.
    }
};

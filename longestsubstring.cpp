class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
    int n = s.size();
    int maxlength = 0 ;
    for (int i = 0 ; i< n ; i++ ){
        int hash[250] = {0};
        for(int j = i ; j < n ; j++){
            if (hash[(int)s[j]] == 1)
            break;
            int length = j-i+1 ;
            maxlength = max(maxlength , length );
            hash[(int)s[j]] = 1; 
        }
    }
    return maxlength ;
    }
};
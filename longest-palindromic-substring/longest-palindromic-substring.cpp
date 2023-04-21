class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.length();
    int start = 0, maxLength = 0;
    
    for (int i = 0; i < n; i++) {
        // Expand around odd-length center
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        int len = right - left - 1;
        if (len > maxLength) {
            maxLength = len;
            start = left + 1;
        }
        
        // Expand around even-length center
        left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        len = right - left - 1;
        if (len > maxLength) {
            maxLength = len;
            start = left + 1;
        }
    }
    
    return s.substr(start, maxLength);
}


};
class Solution {
public:
    bool isPalindrome(string s) {
          
    int n = s.length()-1;
    int a =0;
    
    // Handle empty or non-alphanumeric string
    if(n < 0) {
        return true;
    }
    
    while(a<n) {
        while(!(isalnum(s[a]))) {
            a++;
            if (a > n) { // Handle case where string is all non-alphanumeric
                return true;
            }
        }
        while(!(isalnum(s[n]))) {
            n--;
            if (n < a) { // Handle case where string is all non-alphanumeric
                return true;
            }
        }
        if(tolower(s[a]) != tolower(s[n])) {
            return false;
        }
        a++;
        n--;
    }
    return true;
}

        
    
};
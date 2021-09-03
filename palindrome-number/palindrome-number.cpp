class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 )
            return false;
        
        string divideNumber = to_string(x);
        string reverseNumber = "";
        for(int i=divideNumber.size()-1; i>=0; --i)
        {
            reverseNumber+=divideNumber[i];
        }
        
        if (divideNumber == reverseNumber)
            return true;
        else
            return false;
    }
};
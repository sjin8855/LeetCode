class Solution {
public:
    int myAtoi(string s) {
        
        string tempS = "";
        int maxInt = pow(2, 31) - 1;
        int minInt = pow(2, 31) * -1;
        int signCount = 0;
        int numberCount = 0;
        int notZeroCount = 0;
        int endIdx;
        bool checkEnd = false;

        bool numberCheck = false;

        for (int i = 0; i < s.size(); ++i)
        {
            if (!checkEnd &&
                (s[i] < '0' || s[i] > '9')	&& 
                (s[i] != ' ' && s[i] != '-' && s[i] != '+'))
            {
                checkEnd = true;
                endIdx = i;
            }
            
            if (numberCheck && (s[i] < '0' || s[i] > '9'))
            {
                checkEnd = true;
                endIdx = i;
                break;
            }
            
             if (!numberCheck)
            {
                if (s[i] >= '0' && s[i] <= '9' || s[i] == '-' || s[i] == '+')
                    numberCheck = true;
            }
        }

        if (!checkEnd)
            endIdx = s.size();

        int firstNotZeroIdx = 0;
        
        for (int i = 0; i < endIdx; ++i)
        {
            if (s[i] != ' ')
                tempS += s[i];

            if (s[i] == '+' || s[i] == '-')
                signCount++;
            
            if (s[i] >= '0' && s[i] <= '9')
                numberCount++;
            
            if (notZeroCount == 0 && (s[i] > '0' && s[i] <= '9') )
            {
                firstNotZeroIdx = tempS.size()-1;
                notZeroCount++;
            }
        }

        if (tempS.size() == 0 || signCount > 1 || numberCount == 0 || notZeroCount == 0)
            return 0;

        if (tempS.size() - firstNotZeroIdx >= 12)
        {
            if (tempS[0] == '-')
                return minInt;
            else
                return maxInt;
                
        }
        
        
        long stringToInt = 0;
        stringToInt = stoll(tempS);

        if (stringToInt > maxInt)
        {
            stringToInt = maxInt;
        }

        if (stringToInt < minInt)
        {
            stringToInt = minInt;
        }

        return stringToInt;
        
        
        /*
        아래는, 모든 문자 중 숫자부분만 찾아서 리턴하는 로직
        
        bool check = true;  // plus
        string tempS = "";
        int maxInt = pow(2, 31) - 1;
        int minInt = pow(2, 31) * -1;

        int startIdx, endIdx;
        bool checkStart = false;
        bool checkEnd = false;


        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '+' || s[i] == '-')
            {
                if (s[i] == '-')
                {
                    check = false;
                }
            }

            if (!checkStart && (s[i] >= '0' && s[i] <= '9'))
            {
                checkStart = true;
                startIdx = i;
            }

            if (checkStart && !checkEnd && (s[i] < '0' || s[i] > '9'))
            {
                checkEnd = true;
                endIdx = i;
            }

        }

        if (!checkEnd)
            endIdx = s.size();

        for (int i = startIdx; i < endIdx; ++i)
        {
            tempS += s[i];
        }


        long long stringToInt = stol(tempS);
        if (!check)
        {
            stringToInt *= -1;
        }

        if (stringToInt > maxInt)
        {
            stringToInt = maxInt;
        }

        if (stringToInt < minInt)
        {
            stringToInt = minInt;
        }

        return stringToInt;
        
        */
    }
};
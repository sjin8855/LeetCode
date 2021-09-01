class Solution {
public:
    int reverse(int x) {
        string strX = to_string(x);
        stack<long long> st;
        long long retVal = 0;
        bool degit = true;  // +
        
        int checkRangePositive = pow(2,31)-1;
        int checkRangeNegative = pow(-2,31);
        
        for(int i=0; i<strX.size(); ++i)
        {
            if (strX[i] == '-')
            {
                degit = false;  // -
            }
            else
            {
                st.push(strX[i]-'0');
            }
            
        }
        
        while(!st.empty())
        {
            retVal = retVal + st.top() * pow(10, st.size()-1);
            
            if (retVal > checkRangePositive || retVal < checkRangeNegative)
            {
                return 0;
            }
            
            st.pop();
        }
        
        if (!degit)
        {
            retVal *= -1;
        }
        
        return retVal;
    }
};
class Solution {
public:
    string intToRoman(int num) {
        int thousand = num/1000;
        int hundred = num/100 % 10;
        int tenth = num/10 % 10;
        int oneth = num % 10;
        string retRoman = "";
        
        // 1000단위는 3까지밖에 안들어옴 그냥 쓰면됌.
        for(int i=0; i < thousand; ++i)
        {
            retRoman += "M";
        }
        
        if (hundred >= 5)
        {
            if (hundred == 9)
            {
                retRoman += "CM";
                hundred-=9;
            }
            else
            {
                retRoman += "D";
                hundred-=5;
            }
        }
        
        for(int i=0; i<hundred; ++i)
        {
            
            if (hundred == 4)
            {
                retRoman += "CD";
                break;
            }
           
            else
            {
                retRoman += "C";
            }
        }
        
        if (tenth >= 5)
        {
            if (tenth == 9)
            {
                retRoman += "XC";
                tenth-=9;
            }
            else
            {
                retRoman += "L";
                tenth-=5;
            }
        }
        
        for(int i=0; i<tenth; ++i)
        {
            
            if (tenth == 4)
            {
                retRoman += "XL";
                break;
            }
           
            else
            {
                retRoman += "X";
            }
        }
        
        if (oneth >= 5)
        {
            if (oneth == 9)
            {
                retRoman += "IX";
                oneth-=9;
            }
            else
            {
                retRoman += "V";
                oneth-=5;
            }
        }
        
        for(int i=0; i<oneth; ++i)
        {
            
            if (oneth == 4)
            {
                retRoman += "IV";
                break;
            }
           
            else
            {
                retRoman += "I";
            }
        }
        
        return retRoman;
    }
};
class Solution {
public:
    int romanToInt(string s) {
        int thousand = 0;
        int hundred = 0;
        int tenth = 0;
        int oneth = 0;
        
        bool lastFourNineCheck = false;
        
        for(int i=0; i<s.size()-1; ++i)
        {
            if (s[i] == 'I')
            {
                if (s[i+1] == 'V')
                {
                    oneth+=4;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else if (s[i+1] == 'X')
                {
                    oneth+=9;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else
                {
                    oneth++;
                }
            }
            
            else if (s[i] == 'V')
            {
                oneth+=5;
            }
            
            else if (s[i] == 'X')
            {
                if (s[i+1] == 'L')
                {
                    tenth+=4;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else if (s[i+1] == 'C')
                {
                    tenth+=9;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else
                {
                    tenth++;
                }
            }
            
            else if (s[i] == 'L')
            {
                tenth+=5;
            }
            
            else if (s[i] == 'C')
            {
                if (s[i+1] == 'D')
                {
                    hundred+=4;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else if (s[i+1] == 'M')
                {
                    hundred+=9;
                    if (i == s.size()-2)
                    {
                        lastFourNineCheck = true;    
                    }
                    i++;
                }
                else
                {
                    hundred++;
                }
            }
            
            else if (s[i] == 'D')
            {
                hundred += 5;
            }
            
            else if (s[i] == 'M')
            {
                thousand++;
            }
        }
        
        if (!lastFourNineCheck)
        {
            if (s[s.size()-1] == 'I')
                oneth++;
            if (s[s.size()-1] == 'V')
                oneth+=5;
            if (s[s.size()-1] == 'X')
                tenth++;
            if (s[s.size()-1] == 'L')
                tenth+=5;
            if (s[s.size()-1] == 'C')
                hundred++;
            if (s[s.size()-1] == 'D')
                hundred+=5;
            if (s[s.size()-1] == 'M')
                thousand++;
        }
        
        return thousand*1000 + hundred*100 + tenth*10 + oneth;
    }
};
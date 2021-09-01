class Solution {
public:
    string convert(string s, int numRows) {
        bool dir = true;    // true : 아래 / false : 대각선 위
        int dirCnt = 0;
        char rowString[1001][1001] = {'\0',};
        string retString = "";
        int dx = 0;
        int dy = 0;
        for(int i=0; i<s.size(); ++i)
        {
            if (dirCnt == numRows-1 && numRows > 1)
            {
                dirCnt = 0;
                dir = !dir;
            }
            
            if (dir)
            {
                rowString[dy++][dx] = s[i];
            }
            
            else
            {
                rowString[dy--][dx++] = s[i];
            }
            
            dirCnt++;
            
           
        }
        
        //[0][0] = P / dy = 1 , dx = 0 / dirCnt = 1
        //[1][0] = A / dy = 2 , dx = 0 / dirCnt = 2
        //[2][0] = Y / dy = 1 , dx = 1 / dirCnt = 1
        //[1][1] = P / 
        for(int i=0; i<1001; ++i)
        {
            for(int j=0; j<1001; ++j)
            {
                if (rowString[i][j] != '\0')
                    retString+=rowString[i][j];
            }
        }
        
        
        return retString;
    }
    
};
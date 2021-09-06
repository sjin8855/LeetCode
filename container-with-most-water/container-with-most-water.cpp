class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l = 0;
        int r = height.size()-1;
        while (l < r)
        {
            int distance = r-l;
            int area = height[l] > height[r] ? height[r]*distance : height[l]*distance;
            if (maxArea < area)
            {
                maxArea = area;
            }
            
            if (height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        
        
        return maxArea;
    }
};
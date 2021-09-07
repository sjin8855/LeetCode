class Solution {
public:    
    int threeSumClosest(vector<int>& nums, int target) {
        int minDiff = 99999;
        int x,y,z;
        for(int i=0; i<nums.size()-2; ++i)
        {
            for(int j=i+1; j<nums.size()-1; ++j)
            {
                for(int k=j+1; k<nums.size(); ++k)
                {
                    
                    if (abs(nums[i]+nums[j]+nums[k]-target) < minDiff )
                    {
                        minDiff = abs(nums[i]+nums[j]+nums[k]-target);
                        x = i;
                        y = j;
                        z = k;
                    }
                }
            }
        }
        return nums[x] + nums[y] + nums[z];
    }
};
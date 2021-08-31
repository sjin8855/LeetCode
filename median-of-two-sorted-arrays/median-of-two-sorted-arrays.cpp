class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeV = nums1;
        for(int i=0; i<nums2.size(); ++i)
        {
            mergeV.push_back(nums2[i]);
        }
        
        sort(mergeV.begin(), mergeV.end());
        
        int middle = mergeV.size()/2;
        
        if (mergeV.size() == 0)
        {
            return 0;
        }
        
        // 짝홀 체크, false : 홀 / true : 짝
        bool checkEven = true;
        if (mergeV.size()%2 == 1)
        {
            checkEven = false;
        }
        
        if (checkEven)
        {
            return double((mergeV[middle-1] + mergeV[middle]) / 2.0);
        }
        else
        {
            return mergeV[middle];
        }
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
       
        vector<int> nums3(nums1.size() + nums2.size());

        int i;
        for (i = 0; i < nums1.size(); i++) 
        {
            nums3[i] = nums1[i];
        }

        for (int j = 0; j < nums2.size(); j++, i++) 
        {
            nums3[i] = nums2[j];
        }

        // Sort the nums3 array using bubble sort
        for (int m = 0; m < nums3.size(); m++) 
        {
            for (int n = 0; n < nums3.size() - 1; n++) 
            {
                if (nums3[n] > nums3[n + 1]) 
                {
                    int temp = nums3[n];
                    nums3[n] = nums3[n + 1];
                    nums3[n + 1] = temp;
                }
            }
        }

        // Find the median
        int s = nums1.size() + nums2.size();
        if (s % 2 == 0) 
        {
            int mid1 = s / 2;
            int mid2 = mid1 - 1;

            return (nums3[mid1] + nums3[mid2]) / 2.0;
        } 
        else 
        {
            int mid = s / 2;
            return nums3[mid];
        }

        return 0;  // this will never be reached
    }
};

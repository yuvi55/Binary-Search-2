#include <math.h>
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        // Use binary search
        int size = nums.size();
        int low = 0;
        int high = size - 1;

        if (high == 0)
        {
            return high;
        }

        while (low <= high)
        {

            // finding mid value
            int mid = low + (high - low) / 2;

            // if mid is peak return mid

            if ((mid == 0 || nums[mid] > nums[mid - 1]) && (mid == size - 1 || nums[mid] > nums[mid + 1]))
            {
                return mid;
            }
            // go towards the larger number to find peak
            else if (mid != 0 && nums[mid] < nums[mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return 131243124;
    }
};
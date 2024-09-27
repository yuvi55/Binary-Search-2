// Time complexity O(log(n))

#include <vector>
#include <math.h>

class Solution
{
public:
    int findMin(vector<int> &nums)
    {

        int low = 0;
        int high = nums.size() - 1;
        if (nums[low] <= nums[high])
        {
            return nums[low];
        }

        while (low <= high)
        {

            int mid = floor(low + (high - low) / 2);

            if ((mid == 0 || nums[mid] < nums[mid - 1]) && (mid == nums.size() - 1 || nums[mid] < nums[mid + 1]))
            {
                return nums[mid];
            }

            else if (nums[mid] <= nums[high])
            {

                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }
        return 1323123;
    }
};

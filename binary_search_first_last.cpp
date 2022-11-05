// Program to find the first and last posititon  of an element in an array
// Needs to be computed in O(logn) complexity
// Need to use Binary search
// Eg: [1,2,3,4,4,5] : return index [3,4]
// #include <vector>
// #include <math.h>

// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {

//         // initialise first and last elements and array to return

//         int first = 0;
//         int last = nums.size() - 1;
//         int arr_ret[2] = [];

//         while (first <= last)
//         {
//             mid = floor(first + (last - first) / 2); // to prevent integer overflow

//             // Check if mid is equal to target
//             if (nums[mid] == target && nums[mid] >= nums[mid - 1])
//             {
//                 first = mid + 1;
//             }

//             // perform normal binary search to look for the target on the left side
//             if (nums[mid] < target)
//             {
//                 first = mid + 1;
//             }

//             else
//             {
//                 last = mid - 1;
//             }
//         }
//     }
// };
// Time complexity O(log(n))
#import <vector>
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int size = nums.size();
        int low = 0;
        int high = size - 1;

        vector<int> arr_to_return{};

        if (nums.size() == 0)
        {
            return {-1, -1};
        }

        while (low <= high)
        {

            int mid = low + (high - low) / 2; // to prevent integer overflow

            if (nums.size() == 1 && nums[mid] == target)
            {
                return {mid, mid};
            }
            // check if mid and mid +1 is equal to target
            if (nums[mid] == target && nums[mid + 1] == target)
            {
                // arr_to_return.insert(mid,mid+1) ;

                return {mid, mid + 1};
            }

            else if (nums[mid] == target && nums[mid - 1] == target)
            {
                // arr_to_return.insert(mid-1,mid) ;
                return {mid - 1, mid};
            }

            else if (nums[mid] != target && nums[mid] < nums[high])
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }
        return {-1, -1};
    }
};
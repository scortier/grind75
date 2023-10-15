class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int leftPtr = 0;
        int rightPtr = nums.size() - 1;

        while (leftPtr <= rightPtr)
        {
            // calculate the middle index of the array
            int mid = leftPtr + (rightPtr - leftPtr) / 2;

            // check if the middle element is equal to target
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            { // check if the middle element is less than target
                leftPtr = mid + 1;
            }
            else
            { // if the middle element is greater than target
                rightPtr = mid - 1;
            }
        }

        // target not found in the array
        return -1;
    }
};
https : // leetcode.com/problems/single-element-in-a-sorted-array/

        class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {

        if (nums.size() == 1)
        {
            return nums[0];
        }

        if (nums[0] != nums[1])
        {
            return nums[0];
        }
        if (nums[nums.size() - 1] != nums[nums.size() - 2])
        {
            return nums[nums.size() - 1];
        }

        int start = 0;
        int end = nums.size() - 1;
        while (end >= start)
        {
            int mid = (start + end) / 2;
            if ((nums[mid] != nums[mid - 1]) && (nums[mid + 1]) != nums[mid])
            {
                return nums[mid];
            }
            if (((mid % 2 == 0) && (nums[mid] == nums[mid + 1])) || ((mid % 2 != 0) && (nums[mid] == nums[mid - 1])))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return 0;
    }
};

https: // nutritious-closet-2ba.notion.site/540-Single-Element-in-a-Sorted-Array-ce1ecfe92b3f4ecbae434725e2a8b651
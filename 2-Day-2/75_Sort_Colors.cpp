Link of the problem ~ https://leetcode.com/problems/sort-colors/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        vector<int> need;
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for (auto elem : nums)
        {
            if (elem == 0)
            {
                count0++;
            }
            else if (elem == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        nums.clear();
        for (int i = 0; i < count0; i++)
        {
            nums.push_back(0);
        }
        for (int i = 0; i < count1; i++)
        {
            nums.push_back(1);
        }
        for (int i = 0; i < count2; i++)
        {
            nums.push_back(2);
        }
    }
};



optimised solution :) 


class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = 0;
        while (end >= mid)
        {
            if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[end], arr[mid]);
                end--;
            }
            else if (arr[mid] == 0)
            {

                swap(arr[start], arr[mid]);
                start++, mid++;
            }
        }
    }
};


Find the most optimise solution on ~https: // nutritious-closet-2ba.notion.site/75-Sort-Colors-b47c39189f614e61950387f57e7d71f0
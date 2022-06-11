// 121. Best Time to Buy and Sell Stock 
class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        int maxi = 0;
        int compelem = p[0];

        for (int i = 0; i < p.size(); i++)
        {
            compelem = min(compelem, p[i]);
            maxi = max(maxi, (p[i] - compelem));
        }
        return maxi;
    }
};
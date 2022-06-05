https : // www.codingninjas.com/codestudio/problems/1062679?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

        double
        multiply(double mid, int count)
{
    double ans = 1.0;
    for (int i = 0; i < count; i++)
    {
        ans = ans * mid;
    }
    return ans;
}

double findNthRootOfM(int n, long long m)
{
    double ep = 1e-8;
    double low = 1;
    double high = m;
    while ((high - low) > ep)
    {
        double mid = (high + low) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

solution ~https: // nutritious-closet-2ba.notion.site/Nth-Root-Of-M-32c4b64118db48048a69b93264fe4c50
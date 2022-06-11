#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
bool isPrime(int n)
{
   // Corner case
  if (n <= 1)
  return false;
 // Check from 2 to n-1
for (int i = 2; i < n; i++)
if (n % i == 0)
 return false;
return true;
}
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
vector<int> checkmissing_repeatelem(vector<int>nums)
{

    vector<int> ans;
    unordered_map<int, int> mp;
    int n = nums.size();
    for (auto elem : nums)
    {
        mp[elem]++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            ans.push_back(i);
            break;
        }
    }

    for (auto elem : mp)
    {
        if (elem.second == 2)
        {
            ans.push_back(elem.first);
            break;
        }
    }

    return ans;
}

    int32_t
    main()
{
    fast

        // Fuck Ratings, I'm in Love with Experience.
        // Once a Charas, Always a CHARAS.

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k; 
            vec.push_back(k);
      }
      vector<int>ans=  checkmissing_repeatelem(vec);
       for(auto elem : ans )
       {
           cout << elem <<" ";
       }
}
return 0;
}




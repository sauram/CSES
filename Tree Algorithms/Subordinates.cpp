#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    vector<int> parent(n+1,0);
    int x;
    for(int i=2;i<=n;i++)
    {
        cin>>x;
        dp[x]++;
        parent[i]=x;
    }
    for(int i=n;i>=2;i--)
    {
        dp[parent[i]]+=dp[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
}

signed main()
{
    solve();
}
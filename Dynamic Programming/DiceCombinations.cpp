#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int dp[1000001];
const int mod = 1e9 + 7;
int recur(int n)
{
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]) return dp[n];
    dp[n] = recur(n-1)+recur(n-2)+recur(n-3)+recur(n-4)+recur(n-5)+recur(n-6);
    dp[n] = dp[n]%mod;
    return dp[n];
}
void solve()
{
    int n;
    cin>>n;
    recur(n);
    cout<<dp[n]<<endl;
}

signed main()
{
    solve();
}
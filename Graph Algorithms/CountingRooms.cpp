#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int d[] = {1,0,-1,0,1};
void dfs(int i, int j, vector<vector<char>> &grid)
{
    int n= grid.size();
    int m = grid[0].size();
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='#') return;
    grid[i][j]='#';
    for(int k=0;k<4;k++) dfs(i+d[k],j+d[k+1],grid);
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m,'.'));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.') {dfs(i,j,grid); count++;}
        }
    }
    cout<<count<<endl;
}

signed main()
{
    solve();
}
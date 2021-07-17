#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int xoro=0;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        xoro=xoro^a[i];
    }
    for(int i=1;i<=n;i++){
        xoro=xoro^i;
    }
    cout<<xoro;
    return 0;
}
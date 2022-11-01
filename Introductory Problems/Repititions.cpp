#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l= s.length();
    int mx=1;
    for(int i=0;i<l;i++){
        int ans=1;
        while(s[i]==s[i+1] && i+1<l){
            ans++;
            i++;
        }
        mx= max(ans,mx);
    }
    cout<<mx;
}
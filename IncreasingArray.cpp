#include<iostream>
#include<vector>
using namespace std;
long max(long a, long b){
    if(a>b) return a;
    return b;
}
int main(){
    long n;
    cin>>n;
    vector<long> a(n);
    for(long i=0;i<n;i++) cin>>a[i];

    long ans=0;
    for(long i=1;i<n;i++){
        ans+= max(a[i-1]-a[i],0);
        a[i]= max(a[i],a[i-1]);
    }
    cout<<ans;
}
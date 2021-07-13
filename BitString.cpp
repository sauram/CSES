#include <iostream>
using namespace std;
long long modPower(long long a, long long b, long long mod){
    a%=mod;
    long long result = 1;
    while(b>0){
        if(b&1){
            result*=a;
            result%=mod;
        }
        a=a*a;
        a%=mod;
        b=b>>1;
    }
    return result;
}
int main(){
    long long n;
    cin>>n;
    const long long mod = 1e9 + 7;
    long long ans = modPower(2,n,mod);
    ans = ans % mod;
    cout<<ans<<endl;
    return 0;
}
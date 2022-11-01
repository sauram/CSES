#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long fiveFact = 5;
    long long total = 0;
    while(fiveFact <= n){
        total += (n/fiveFact);
        fiveFact*=5;
    }
    cout<<total<<endl;
}
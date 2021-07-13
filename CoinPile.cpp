#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int coin1, coin2;
        cin>>coin1>>coin2;

        //acc to equation
        // x + 2y = coin1
        // 2x + y = coin2
        if(ceil(((2*coin1)  - coin2)/3.0) != floor(((2*coin1)  - coin2)/3.0)) cout<<"NO\n";
        else{
            int y = (2*coin1  - coin2)/3;
            int x = coin1 - 2*y;
            if(y>=0 && x>=0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
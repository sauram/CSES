#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
 
int main(){
    long long numberOfElements;
    cin>>numberOfElements;
    vector<long long> coins (numberOfElements);
    for(long long i=0;i<numberOfElements;i++) cin>>coins[i];
    sort(coins.begin(), coins.end());
    long long smallestSum=1;
    for(long long i=0;i<numberOfElements && smallestSum >= coins[i];i++){
        smallestSum+=coins[i];
    }
    cout<<smallestSum<<endl;
    return 0;
}
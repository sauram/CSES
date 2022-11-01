#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long max(long long &a, long long &b){
    if(a>b) return a;
    return b;
}
int main(){
    long long numberOfElements;
    cin>>numberOfElements;
    vector<long long> elements(numberOfElements);
    for(long long i=0;i<numberOfElements;i++) cin>>elements[i];
    long long maximumSubarraySum = elements[0];
    long long best = elements[0];
    long long currentSum = elements[0];
    for(long long i=1;i<numberOfElements;i++){
        currentSum = max(currentSum + elements [i], elements[i]);
        best = max(best, currentSum);
        maximumSubarraySum = max(maximumSubarraySum, best);
    }
    cout<<maximumSubarraySum<<endl;
    return 0;
}
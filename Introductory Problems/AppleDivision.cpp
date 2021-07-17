#include <iostream>
#include <vector>
using namespace std;

long long add (vector<long long> &numbers){
    long long sum = 0;
    for (auto i : numbers) sum += i;
    return sum;
}

void minimumDifference (long long &ans, vector<long long> &numbers, long long &sum, long long start, long long &end, long long currentSum){
    //important condition
    if(sum - currentSum - currentSum >=0) ans =  min (ans, sum - currentSum - currentSum);
    //

    if(start==end) return;
    minimumDifference(ans, numbers,sum, start+1,end, currentSum + numbers[start]);
    minimumDifference(ans, numbers,sum, start+1,end, currentSum);
}

int main(){
    long long n;
    cin>>n;
    vector<long long> numbers(n);
    for(long long i=0;i<n;i++) cin>>numbers[i];
    long long ans = 10000000000000;
    long long sum =  add(numbers);
    minimumDifference(ans, numbers, sum, 0, n, 0);
    cout<<ans<<endl;
}
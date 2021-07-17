#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int n,x, nresult=0;
    cin>>n>>x;
    vector<int> weights(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    sort(weights.begin(), weights.end());
    int front= 0;
    int back = n-1;
    while(front<back){
        int sumOfPair = weights[front]+weights[back];
        if(sumOfPair<=x){
            nresult+=1;
            front++;
            back--;
            continue;
        }
        back--;
    }
    cout<<n-nresult<<endl;
}
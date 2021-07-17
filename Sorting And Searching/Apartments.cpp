#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int n,m,k,answer=0;
    cin>>n>>m>>k;
    vector<int> requiredSize(n);
    vector<int> actualSize(m);
    for(int i=0;i<n;i++) cin>>requiredSize[i];
    for(int i=0;i<m;i++) cin>>actualSize[i];
    sort(requiredSize.begin(), requiredSize.end());
    sort(actualSize.begin(), actualSize.end());
    int in=0;
    int im=0;
    while(in<n&&im<m){
        int difference = requiredSize[in]-actualSize[im];
        if(abs(difference)<=k){
            answer++;
            in+=1;
            im+=1;
            continue;
        }
        if(difference>0){
            im+=1;
        }else{
            in+=1;
        }
    }
    cout<<answer<<endl;
}
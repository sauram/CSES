#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

int main(){
    int numberOfElements, requiredSum;
    cin>>numberOfElements >> requiredSum;
    vector<int> elements(numberOfElements);
    for(int i=0;i<numberOfElements;i++) cin>>elements[i];
    map<int,int> mp;
    for(int i=0;i<numberOfElements;i++){
        if(mp.find(requiredSum-elements[i])!= mp.end()){
            cout<<mp[requiredSum-elements[i]]<<" "<<i+1<<endl;
            return 0;
        }else{
            mp[elements[i]]=i+1;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
 
int main(){
    int numberOfCubes;
    cin>>numberOfCubes;
    
    vector<int> cubeSizes(numberOfCubes);
    for(int i=0;i<numberOfCubes;i++) cin>>cubeSizes[i];
 
    vector<int> towers;
    
    for(int i=0;i<numberOfCubes;i++){
        if(towers.empty()) {
            towers.push_back(cubeSizes[i]);
            continue;
        }
        int index = upper_bound(towers.begin(), towers.end(), cubeSizes[i])-towers.begin();
        if(index==towers.size()) towers.push_back(cubeSizes[i]);
        else{
            towers[index]=cubeSizes[i];
        }
    }
    cout<<towers.size()<<endl;
    return 0;
}
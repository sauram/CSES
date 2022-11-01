#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int main(){
    int lengthOfStreet, numberOfTrafficLights;
    cin>>lengthOfStreet>>numberOfTrafficLights;
    vector<int> positionsOfTrafficLights;
    vector<int> results;
    set <int> uset;
    uset.insert(0);
    uset.insert(lengthOfStreet);
    int mx=0;
    
   for(int i=0;i<numberOfTrafficLights;i++){
        int position;
        cin>>position;
        positionsOfTrafficLights.push_back(position);
        uset.insert(position);
    }

    for(auto i = uset.begin(), it=i++;i!=uset.end();i++,it++) {
        mx=max(mx, *i - *it);
    }
    results.push_back(mx);
    for(int i=numberOfTrafficLights-1;i>0;i--){
        int element = positionsOfTrafficLights[i];
        auto it = uset.find(element);
        // cout<<*it<<" ";
        auto it1=it; it1--;
        auto it2=it; it2++;
        mx=max(mx,*it2 - *it1);
        // cout<<*it2 << *it1<<endl;
        results.push_back(mx);
        uset.erase(it);
    }

    for(int i=int(results.size())-1;i>=0;i--) cout<<results[i]<<" ";

    return 0;
}
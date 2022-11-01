#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;
 
int max(int a, int b){
    if(a>b) return a;
    return b;
}
 
int main(){
    int numberOfElements;
    cin>>numberOfElements;
 
    vector<int> elements(numberOfElements);
    for(int i=0;i<numberOfElements;i++) cin>>elements[i];
    
    int currentCount=0, maxCount=1;
 
    map<int,int> m;
    int index=0;
    for(int i=0;i<numberOfElements;i++){
        if(m.find(elements[i])==m.end()){
            currentCount++;
            m[elements[i]]=i;
        }else{
            maxCount = max(maxCount, currentCount);
            if(m[elements[i]]<index){
                currentCount++;
            }else{
                currentCount= i - m[elements[i]];
                index=m[elements[i]];
            }
            m[elements[i]]=i;
        }
    }
    maxCount = max(maxCount, currentCount);
    cout<<maxCount<<endl;
    return 0;
}
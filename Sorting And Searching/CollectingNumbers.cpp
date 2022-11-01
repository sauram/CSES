#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
 
int main(){
    int numberOfElements;
    cin>>numberOfElements;
 
    vector<int> elements(numberOfElements);
    vector<int> positionOfElements(numberOfElements+1,-1);
    for(int i=0;i<numberOfElements;i++){
        cin>>elements[i];
        positionOfElements[elements[i]]=i;
    }
    int count=1;
    for(int i=2;i<=numberOfElements;i++){
        if(positionOfElements[i-1]>positionOfElements[i]) count++;
    }
    return 0;
}
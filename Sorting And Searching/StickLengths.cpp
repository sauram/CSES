#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int numberOfElements;
    cin>>numberOfElements;
    vector<int> elements(numberOfElements);
    for(int i=0;i<numberOfElements;i++) cin>>elements[i];
    sort(elements.begin(), elements.end());
    int index = numberOfElements/2;
    long long total=0;
    for(int i=0;i<numberOfElements;i++){
        total+= abs(elements[index]-elements[i]);
    }
    cout<<total<<endl;
    return 0;
}

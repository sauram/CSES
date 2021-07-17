#include <iostream>
#include <set>
using namespace std;

int main(){
    int numbers;
    cin>>numbers;
    set<int> s;
    while(numbers--){
        int element;
        cin>>element;
        s.insert(element);
    }
    cout<<s.size()<<endl;
    return 0;
}
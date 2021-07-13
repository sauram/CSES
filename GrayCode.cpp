#include <iostream>
#include <vector>
using namespace std;

//insert is costlier than push_back in this question atleast
//List vs Vector, which to use?

//See the pattern
/*
1 : 0
    1
2 : 0 | 0
    0 | 1
    -----
    1 | 1
    1 | 0

3 : 0 | 0 | 0
    0 | 0 | 1
    0 | 1 | 1
    0 | 1 | 0
    ----------
    1 | 1 | 0
    1 | 1 | 1
    1 | 0 | 1
    1 | 0 | 0
*/

int main(){
    int n;
    cin>>n;
    vector<string> result;

    if(n==1){
        cout<<"0\n1\n";
        return 0;
    } 
    result.push_back("0");
    result.push_back("1");
    for(int i=2;i<=n;i++){
        vector<string> temp;
        int resultSize = result.size();
        for(int j=0;j<resultSize;j++){
            temp.push_back("0"+result[j]);
        }
        for(int j=resultSize-1;j>=0;j--){
            temp.push_back("1"+ result[j]);
        }
        result = temp;
    }
    for(int i=0;i<result.size();i++) cout<<result[i]<<endl;
}
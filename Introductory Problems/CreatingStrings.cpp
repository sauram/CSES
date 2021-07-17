#include <iostream>
#include <vector>
#include <set>
using namespace std;

//Using struct but pair can also be used

struct structure{
    char ch;
    bool b;
};

void backtrack(vector<structure> &InputVector, set<string> &result, string &partResult, int index){
    int inputLength = InputVector.size();
    if(inputLength == index){
        result.insert(partResult);
        //cout<<partResult<<endl;
        return;
    }

    for(int i=0;i<inputLength;i++){
        if(InputVector[i].b==false){
            //cout<<i<<endl;
            InputVector[i].b=true;
            //cout<<InputVector[i].b<<endl;
            partResult+=InputVector[i].ch;
            backtrack(InputVector, result, partResult, index+1);
            partResult.pop_back();
            InputVector[i].b=false;
        }
    }

}

int main(){
    string input;
    cin>>input;
    vector<structure> inputVector;
    int inputLength = input.length();
    for(int i=0;i<inputLength;i++){
        structure temp;
        temp.ch = input[i];
        temp.b = false;
        inputVector.push_back(temp);
    }
    set<string> result;
    string partResult ="";
    backtrack(inputVector,result,partResult, 0);
    cout<<result.size()<<endl;
    for(auto i : result){
        cout<<(i)<<endl;
    }
    return 0;
}
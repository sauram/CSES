#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    int inputLength = input.length();
    int oddCount = 0;
    vector<int> alphabets(26,0);
    for(int i=0; i<inputLength; i++){
        alphabets[input[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(alphabets[i]%2 == 1) oddCount++;
    }
    if(oddCount>1) cout<<"NO SOLUTION\n";
    else{
        string output="";
        for(int i=0;i<26;i++){
            if(alphabets[i]%2 == 0){
                for(int j=1;j<=alphabets[i]/2;j++){
                    output.push_back((i+'A'));
                }
            }
        }
        for( int i=0; i< 26; i++){
            if(alphabets[i]%2 == 1){
                for(int j=1;j<=alphabets[i];j++){
                    output.push_back((i+'A'));
                }
            }
        }
        for(int i=25;i>=0;i--){
            if(alphabets[i]%2 == 0){
                for(int j=1;j<=alphabets[i]/2;j++){
                    output.push_back((i+'A'));
                }
            }
        }
        cout<<output;
    }
}

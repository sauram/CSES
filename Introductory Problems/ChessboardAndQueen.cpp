#include <iostream>
#include <vector>
using namespace std;

bool isOkay(vector<string> &chessboard, int x, int y){
    //left
    for(int i=x-1;i>=0;i--){
        if(chessboard[i][y]=='Q') return false;
    }
    //right
    for(int i=x+1;i<8;i++){
        if(chessboard[i][y]=='Q') return false;
    }

    //up
    for(int i=y-1;i>=0;i--){
        if(chessboard[x][i]=='Q') return false;
    }

    //down
    for(int i=y+1;i<8;i++){
        if(chessboard[x][i]=='Q') return false;
    }

    //top-left
    for(int i=x-1,j=y-1;i>=0 && j>=0;i--,j--){
        if(chessboard[i][j]=='Q') return false;
    }
    
    //bottom-left
    for(int i=x+1,j=y-1;i<8&&j>=0;i++,j--){
        if(chessboard[i][j]=='Q') return false;
    }

    //top-right
    for(int i=x-1,j=y+1;i>=0 && j<8;i--,j++){
        if(chessboard[i][j]=='Q') return false;
    }

    //bottom-right
    for(int i=x+1,j=y+1;i<8 && j<8; i++,j++){
        if(chessboard[i][j]=='Q') return false;
    }
    return true;
}

void backtrack(vector<string> &chessboard, int start, int &answer){
    //cout<<start<<endl;
    if(start==8){
        answer+=1;
        return;
    }
    for(int i=0;i<8;i++){
        if(chessboard[start][i]!='*'){
            chessboard[start][i]='Q';
            if(isOkay(chessboard,start,i)) backtrack(chessboard,start+1,answer);
            chessboard[start][i]='.';
        }
    }
}

int main(){

    //input
    vector <string> chessboard;
    for(int i=0;i<8;i++){
        string temp;
        cin>>temp;
        chessboard.push_back(temp);
    }

    //Use backtrack and logic and separate them for better understanding;
    int answer = 0;
    backtrack(chessboard,0,answer);
    cout<<answer<<endl;

    return 0;
}
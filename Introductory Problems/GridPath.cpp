#include <iostream>
#include <vector>
using namespace std;
void backtrack(vector<vector<int>> &grid, int startRow, int startCol, int endRow, int endCol, vector<string> &answers, string &steps){
    if(startRow==endRow && startCol == endCol){
        if(steps.length()==48) answers.push_back(steps);
        return;
    }
    grid[startRow][startCol]=1;
    //left
    if(startRow-1>=0 && grid[startRow-1][startCol]==0) {
        steps.push_back('L');
        backtrack(grid,startRow-1,startCol,endRow,endCol,answers,steps);
        steps.pop_back();
    }
    //right
    if(startRow+1<7 && grid[startRow+1][startCol]==0) {
        steps.push_back('R');
        backtrack(grid,startRow+1,startCol,endRow,endCol,answers,steps);
        steps.pop_back();
    }
    if(startCol-1>=0 && grid[startRow][startCol-1]==0) {
        steps.push_back('U');
        backtrack(grid,startRow,startCol-1,endRow,endCol,answers,steps);
        steps.pop_back();
    }
    if(startCol+1<7 && grid[startRow][startCol+1]==0) {
        steps.push_back('D');
        backtrack(grid,startRow,startCol+1,endRow,endCol,answers,steps);
        steps.pop_back();
    }
    grid[startRow][startCol]=0;

}
int main(){
    string input;
    cin>>input;
    vector<vector<int>> grid(7,vector<int>(7,0));
    vector<string> answers;
    string steps;
    backtrack(grid,0,0,6,0,answers,steps);
    cout<<answers.size();
    return 0;
}
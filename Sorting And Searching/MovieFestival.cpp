#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// Greedy Algorithm should be used in this type of question.

int main(){
    int numberOfMovies;
    cin>>numberOfMovies;
    vector<pair<int,int>> movie(numberOfMovies);
    for(int i=0;i<numberOfMovies;i++){
        cin>>movie[i].first>>movie[i].second;
    }
    sort(movie.begin(), movie.end(), [](pair<int,int> &a, pair<int,int> &b){
        return a.second < b.second;
    });
    int maximumMovie=1;
    int endTime = movie[0].second;
    for(int i=1;i<numberOfMovies;i++){
        if(movie[i].first >= endTime){
            maximumMovie += 1;
            endTime =  movie[i].second;
        }
    }
    cout<<maximumMovie<<endl;
    return 0;
}
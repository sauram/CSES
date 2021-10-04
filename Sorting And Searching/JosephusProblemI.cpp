#include <iostream>
#include <queue>
using namespace std;
/*
    This is solved using different method.
*/
int main(){
    int number;
    cin >> number;
    queue <int> numberqueue;
    for (int i = 1; i <= number; i++){
        numberqueue.push(i);
    }
    int j = 1;
    while(!numberqueue.empty()){
        if(j&1){
            int temp = numberqueue.front();
            numberqueue.pop();
            numberqueue.push(temp);
        }else{
            cout<<numberqueue.front()<<" ";
            numberqueue.pop();
        }
        j++;
    }

}
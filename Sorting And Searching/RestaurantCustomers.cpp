#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//similar to maximum platfrom required for train problem

int main(){
    int numberOfCustomers;
    cin>>numberOfCustomers;
    vector<int> entryTime(numberOfCustomers);
    vector<int> exitTime(numberOfCustomers);
    for(int i=0;i<numberOfCustomers;i++){
        cin>>entryTime[i]>>exitTime[i];
    }
    sort(entryTime.begin(), entryTime.end());
    sort(exitTime.begin(), exitTime.end());
    int maximumCustomer = 1;
    int currentCustomer = 1;

    int i=1;
    int j=0;
    while(i < numberOfCustomers && j < numberOfCustomers){
        if(entryTime[i]<=exitTime[j]){
            currentCustomer++;
            i++;
        }else{
            currentCustomer--;
            j++;
        }
        maximumCustomer = max(maximumCustomer,currentCustomer);
    }
    cout<<maximumCustomer<<endl;
    
    return 0;
}
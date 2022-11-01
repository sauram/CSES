#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int numberOfTickets, numberofCustomers;
    cin>>numberOfTickets>>numberofCustomers;

    vector<int> ticketsPrice(numberOfTickets);
    vector<int> customersPrice(numberofCustomers);
    //vector<bool> isTicketAvailable(numberOfTickets,true);

    for(int i=0;i<numberOfTickets;i++) cin>>ticketsPrice[i];
    for(int i=0;i<numberofCustomers;i++) cin>>customersPrice[i];

    sort(ticketsPrice.begin(), ticketsPrice.end());

    for(int i=0;i<numberofCustomers;i++){
        if(binary_search(ticketsPrice.begin(), ticketsPrice.end(),customersPrice[i])){
            int index = lower_bound(ticketsPrice.begin(), ticketsPrice.end(), customersPrice[i]) - ticketsPrice.begin();
            cout<<ticketsPrice[index]<<"\n";
            ticketsPrice.erase(ticketsPrice.begin()+index);
            continue;
        }
        int index = upper_bound(ticketsPrice.begin(), ticketsPrice.end(), customersPrice[i]) - ticketsPrice.begin();
        index--;
        if(index>=0){
            cout<<ticketsPrice[index]<<"\n";
            ticketsPrice.erase(ticketsPrice.begin()+index);
        }else{;
            cout<<"-1\n";
        }
    }
    return 0;
}
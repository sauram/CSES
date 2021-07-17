#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long val=1;
        if(a>b){
            if(a%2==0){
                val= a*a;
                val-=b;
                val++;
            }else{
                val= (a-1)*(a-1);
                val++;
                val+=b;
                val--;
            }
        }else{
            if(b%2==1){
                val=b*b;
                val-=a;
                val++;
            }else{
                val= (b-1)*(b-1);
                val++;
                val+=a;
                val--;
            }
        }
        cout<<val<<endl;
    }
}
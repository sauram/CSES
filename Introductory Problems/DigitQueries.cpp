#include <iostream>
#include <stack>
using namespace std;

long long power(long long a, long long b){
    long long result = 1;
    while(b>0){
        if(b&1) result*=a;
        a=a*a;
        b=b>>1;
    }
    return result;
}

int main(){
    long long queries;
    cin>>queries;
    while(queries--){
        long long k;
        cin>>k;
        long long mn = 9;
        long long digit=1;
        // 9*1 + 90*2 + 900*3 + 9000*4 ......
        while(k-(mn*digit)>0){
            k-=(mn*digit);
            mn = mn*10;
            digit++;
        }
        long long start = power(10,digit-1)-1;
        long long increment = k/digit;
        start += increment;
        long long insideIncrement = k%digit;
        long long answer;
        if(insideIncrement>0){
            start++;
            stack<int> st;
            while(start>0){
                st.push(start%10);
                start/=10;
            }
            while(insideIncrement--){
                answer = st.top();
                st.pop();
            }
        }else{
            answer = start%10;
        }
        cout<<answer<<endl;

    }
}
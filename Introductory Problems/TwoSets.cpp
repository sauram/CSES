//Partition Problem
//Taking in account constraints...would Partition problem DP be a good choice?
//We have an extra information of continuous array.

#include<bits/stdc++.h>
using namespace std;


int main(){

    long long n;
    cin>>n;
    long long sum=(n*(n+1))/2;
    if(sum%2==1) cout<<"NO\n";
    else{
        vector<int> set1,set2;
        if(n%4==0){
            for(int i=1;i<=n/2;i+=2){
                set1.push_back(i);
                set1.push_back(n-i+1);
                set2.push_back(i+1);
                set2.push_back(n-i);
            }

        }else{
            int mid = n/2 + 1;
            int firstElement=-1;
            for(int i= mid - 1 ;i>0;i--){
                if(i + mid == n - i + 1){
                    set1.push_back(i);
                    firstElement=i;
                    set1.push_back(mid);
                    set2.push_back(n-i+1);
                    break;
                }
            }
            for(int i=1;i<mid;i+=2){
                if(i==firstElement) i++;
                if(i>=mid) break;
                set1.push_back(i);
                set1.push_back(n-i+1);
                if(i+1==firstElement) i++;
                if(i>=mid) break;
                set2.push_back(i+1);
                set2.push_back(n-i);
            }

        }
        cout<<"YES\n";
        int setOneLength= set1.size();
        int setTwoLength= set2.size();
        cout<<setOneLength<<endl;
        for(int i=0;i<setOneLength;i++) cout<<set1[i]<<" ";
        cout<<endl;
        cout<<setTwoLength<<endl;
        for(int i=0;i<setTwoLength;i++) cout<<set2[i]<<" ";
        cout<<endl;
    }
    
}

/*

//Partition Problem Solution

long long n;
    cin>>n;
    long long sum=0;
    for(long long i=1;i<=n;i++){
        sum+=i;
    }
    if(sum%2==1) cout<<"NO\n";
    else{
        sum=sum/2;
        vector<vector<bool>> dp(sum + 1, vector<bool>(n+1, false));
        for(long long i=0;i<=n;i++) dp[0][i]=true;
        for(long long i=1;i<=sum;i++){
            for(long long j=1;j<=n;j++){
                if(i-j>=0) dp[i][j] = dp[i-j][j-1];
                dp[i][j] = dp[i][j] || dp[i][j-1];
            }
        }

        vector<long long> set1, set2;
        long long k=n;
        long long currsum=sum;
        if(dp[currsum][k]){
            while(k>0 && currsum>=0){
                if(currsum-k >=0 && dp[currsum-k][k-1]){
                    set1.push_back(k);
                    currsum-=k;
                    k--;
                }else{
                    set2.push_back(k);
                    k--;
                }
            }
            long long st1= set1.size();
            long long st2=set2.size();
            cout<<"YES\n";
            cout<<st1<<endl;
            for(long long d=0;d<st1;d++) cout<<set1[d]<<" ";
            cout<<endl;
            cout<<st2<<endl;
            for(long long d=0;d<st2;d++) cout<<set2[d]<<" ";
            cout<<endl;
        }else{
            cout<<"NO\n";
        }
    }

*/
#include<iostream>
using namespace std;

int main(){
    int n, temp, max;
    int v[100001], dp[100001];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    max=v[0];
    for(int i=0; i<n; i++){
        if(dp[i]+v[i]<v[i]){
            dp[i+1]=v[i];
        }
        else{
            dp[i+1]=dp[i]+v[i];
        }

        if(max<dp[i+1])
            max=dp[i+1];
    }
    cout << max;
}
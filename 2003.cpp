#include<iostream>
using namespace std;

int main(){
    int n, m, start, end, cnt=0, partial_sum=0;
    int arr[10001];

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    start=0;
    end=0;

    while(end<=n){
        if(partial_sum<m){
            partial_sum+=arr[end++];
        }
        else if(partial_sum>=m){
            partial_sum-=arr[start++];
        }
        if(partial_sum==m){
            cnt++;
        }
    }
    cout << cnt;
}